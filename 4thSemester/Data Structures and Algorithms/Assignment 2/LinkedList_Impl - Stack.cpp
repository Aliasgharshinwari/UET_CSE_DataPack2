#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cstring>

using namespace std;

#define FALSE 0
#define TRUE 1

typedef struct {
    int number;
    char *String;
} ELEMENT_TYPE;

typedef struct node *NODE_TYPE;
typedef struct node {
    ELEMENT_TYPE element;
    NODE_TYPE next;
} NODE;

typedef NODE_TYPE LIST_TYPE;
typedef NODE_TYPE WINDOW_TYPE;

/* position following last element in a list */
WINDOW_TYPE End(LIST_TYPE *List){
    WINDOW_TYPE q;
    q = *List;
    if (q == NULL) {
        cout << "Error: non-existent list" << endl;
        exit(1);
    }

    else {
        while (q->next != NULL) {
            q = q->next;
        }
    }
    return q;
}

/* empty a list */
WINDOW_TYPE Empty(LIST_TYPE *List)
{

    WINDOW_TYPE p, q;
    if (*List != NULL) {
        /* list exists: delete all nodes including header */
        q = *List;
        while (q->next != NULL) {
            p = q;
            q = q->next;
            free(p);
        }
        free(q);
    }


    /* now, create a new empty one with a header node */
    if ((q = (NODE_TYPE) malloc(sizeof(NODE))) == NULL) {
        cout << "Error: function empty: unable to allocate memory" << endl;
        exit(1);
    } else {
        q->next = NULL;
        *List = q;
    }
    return End(List);
}

/* test to see if a list is empty */
int is_Empty(LIST_TYPE *List)
{
    WINDOW_TYPE q;
    q = *List;
    if (q == NULL) {
        cout << "Error: non-existent list" << endl;
        exit(1);
    } else {
        if (q->next == NULL) {
            return TRUE;
        } else {
            return FALSE;
        }
    }
}

/* position at first element in a list */
WINDOW_TYPE first(LIST_TYPE *List)
{
    if (is_Empty(List) == FALSE) {
        return *List;
    } else {
        return End(List);
    }
}

/* position at next element in a list */
WINDOW_TYPE next(WINDOW_TYPE w, LIST_TYPE *List)
{
    if (w == End(List)) {
        cout << "Error: can't find next after end of list" << endl;
        exit(1);
    } else {
        return w->next;
    }
}

/* position at previous element in a list */
WINDOW_TYPE previous(WINDOW_TYPE w, LIST_TYPE *List)
{
    WINDOW_TYPE p, q;
    if (w == first(List)) {
        cout << "Error: can't find previous before start of list" << endl;
        exit(1);
    } else {
        q = *List;
        p = q->next;
        while (p != w) {
            q = p;
            p = p->next;
        }
        return q;
    }
}

/* insert an element at a specified position */
WINDOW_TYPE Insert(ELEMENT_TYPE e, WINDOW_TYPE w, LIST_TYPE *List)
{
    WINDOW_TYPE q;
    if ((q = (NODE_TYPE) malloc(sizeof(NODE))) == NULL) {
        cout << "Error: function insert: unable to allocate memory" << endl;
        exit(1);
    } else {
        q->element = e;
        q->next = w->next;
        w->next = q;
        return q;
    }
}




LIST_TYPE *Delete(WINDOW_TYPE w, LIST_TYPE *List)
{
    WINDOW_TYPE p;
    if (*List == NULL) {
        cout<<"cannot delete from a non-existent list"<<endl;
    } else {
        p = w->next; /* node to be deleted */
        w->next = w->next->next; /* rearrange the links */
        free(p); /* delete the node */
        return(List);
    }
}

/* retrieve an element from a list */
ELEMENT_TYPE retrieve(WINDOW_TYPE w, LIST_TYPE *List)
{
    WINDOW_TYPE p;
    if (*List == NULL) {
        cout<<"cannot retrieve from a non-existent list"<<endl;
    } else {
        return(w->next->element);
    }
}
/* insert an element at a specified position */
LIST_TYPE *PUSH(ELEMENT_TYPE e, LIST_TYPE *List)
{
    Insert(e,first(List),List);
    return List;
}

/* insert an element at a specified position */
ELEMENT_TYPE POP(LIST_TYPE *List)
{
    ELEMENT_TYPE e = retrieve(first(List),List);
    Delete(first(List),List);
    return e;
}

/* retrieve an element from a list */
ELEMENT_TYPE TOP(LIST_TYPE *List)
{

    if (*List == NULL) {
        cout<<"cannot retrieve top from a non-existent stack"<<endl;
    }
    else
    {
        return retrieve(first(List),List);
    }
}

int print(LIST_TYPE *List)
{
    WINDOW_TYPE w;
    ELEMENT_TYPE e;
    printf("Contents of list: \n");
    w = first(List);
    while (w != End(List)) {
        e = retrieve(w,List);
        printf("%d %s\n", e.number, e.String);
        w = next(w, List);
    }
    printf("---\n");
    return(0);
}

/* position at last element in a list */
WINDOW_TYPE last(LIST_TYPE *List)
{
    WINDOW_TYPE p, q;
    if (*List == NULL) {
        cout<<"non-existent list"<<endl;
    } else {
        /* list exists: find last node */
        if (is_Empty(List)) {
            p = End(List);
        } else {
            p = *List;
            q = p->next;
            while (q->next != NULL) {
                p = q;
                q = q->next;
            }
        }
        return(p);
    }
}

/* assign values to an element */
void assign_element_values(ELEMENT_TYPE *e, int number,char s[])
{
    e->String = (char *) malloc(sizeof(char) * strlen(s));
    strcpy(e->String, s);
    e->number = number;
}

int main()
{

    WINDOW_TYPE w;
    ELEMENT_TYPE e;
    LIST_TYPE List = NULL;
    int i;


    Empty(&List);
    print(&List);
    assign_element_values(&e, 1, "String A");
    w = first(&List);
    Insert(e, w, &List);
    print(&List);
    assign_element_values(&e, 2, "String B");
    Insert(e, w, &List);
    print(&List);
    assign_element_values(&e, 3, "String C");
    Insert(e, last(&List), &List);
    print(&List);
    assign_element_values(&e, 4, "String D");
    w = next(last(&List), &List);
    Insert(e, w, &List);
    print(&List);
    w = previous(w, &List);
    Delete(w, &List);

    assign_element_values(&e, 5, "String E");

    //PUSH(e, w, &List);
    //PUSH(e, w, &List);
    //PUSH(e, w, &List);
    POP(&List);
    //POP(&List);

    cout<<"TOP = "<<TOP(&List).number<<" "<<TOP(&List).String<<endl;
    print(&List);
}
