/* array implementation of LIST ADT */
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_LIST_SIZE 100
#define FALSE 0
#define TRUE 1

typedef struct
{
    int number;
    char *string;
} ELEMENT_TYPE;
typedef struct
{
    int last;
    ELEMENT_TYPE a[MAX_LIST_SIZE];
} LIST_TYPE;
typedef int WINDOW_TYPE;


void error(char* str)
{
    printf("%d", str);
}


//** position following last element in a list ***/
WINDOW_TYPE End(LIST_TYPE *list)
{
    return(list->last);
}

//*** position at last element in a list ***/
WINDOW_TYPE last(LIST_TYPE *list)
{
    return(list->last);
}

//*** empty a list ***/
WINDOW_TYPE empty(LIST_TYPE *list)
{
    list->last = -1;
    return(End(list));
}

//*** test to see if a list is empty ***/
int is_empty(LIST_TYPE *list)
{
    if (list->last == -1)
        return(TRUE);
    else
        return(FALSE);

}

//*** position at first element in a list ***/
WINDOW_TYPE first(LIST_TYPE *list)
{
    if (is_empty(list) == FALSE)
        return(0);
    else
        return(End(list));

}

//*** position at next element in a list ***/
WINDOW_TYPE next(WINDOW_TYPE w, LIST_TYPE *list)
{
    if (w == last(list))
        return(End(list));
    else if (w == End(list))
        error("can’t find next after end of list");
    else
        return(w+1);

}

//*** position at previous element in a list ***/
WINDOW_TYPE previous(WINDOW_TYPE w, LIST_TYPE *list)
{
    if (w != first(list))
        return(w-1);
    else
        error("can’t find previous before first element of list");
    return(w);
}


/*** insert an element in a list ***/
LIST_TYPE *insert(ELEMENT_TYPE e, WINDOW_TYPE w, LIST_TYPE *list)
{
    int i;
    if (list->last >= MAX_LIST_SIZE-1)
    {
        error("Can’t insert - list is full");
    }
    else if ((w > list->last + 1) || (w < 0))
    {
        error("Position does not exist");
    }
    else
    {
        for (i=list->last; i>= w; i--)
        {
            list->a[i+1] = list->a[i];
        }
        list->a[w] = e;
        list->last = list->last + 1;
        return(list);
    }
}

ELEMENT_TYPE retrieve(WINDOW_TYPE w, LIST_TYPE *list)
{
    if ( (w < 0) || (w > list->last))
    {
        /* list is empty */
        error("Position does not exist");
    }
    else
    {
        return(list->a[w]);
    }
}

//*** delete an element from a list ***/
LIST_TYPE *Delete(WINDOW_TYPE w, LIST_TYPE *list)
{
    int i;
    if ((w > list->last) || (w < 0))
    {
        error("Position does not exist");
    }
    else
    {
        /* delete it … shift all after w to the left */
        list->last = list->last - 1;
        for (i=w; i <= list->last; i++)
        {
            list->a[i] = list->a[i+1];
        }
        return(list);
    }
}

int assign_element_values(ELEMENT_TYPE *e, int number, char s[])
{
    e->string = (char *) malloc(sizeof(char)* strlen(s+1));
    strcpy(e->string, s);
    e->number = number;
}
int print(LIST_TYPE *list)
{
    WINDOW_TYPE w;
    ELEMENT_TYPE e;
    printf("Contents of list: \n");
    w = first(list);
    while (w != End(list))
    {
        e = retrieve(w, list);
        printf("%d %s\n", e.number, e.string);
        w = next(w, list);
    }
    printf("---\n");
    return(0);
}

int main()
{
    LIST_TYPE l;
    WINDOW_TYPE w;
    ELEMENT_TYPE e1;

    assign_element_values(&e1,10,"at 0");

    insert(e1,w,&l);

    print(&l);

    return 0;
}
