#include<iostream>
using namespace std;

class Node
{

public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class QUEUE
{

public:
    Node* head;

    QUEUE()
    {
        head = NULL;
    }

    void ENQUEUE(int d)
    {
        Node* new_node = new Node(d);

        if(head == NULL)
        {
            head = new_node;
        }

        else
        {
            Node* current = head;

            while(current->next != NULL)
            {
                current = current->next;
            }

            current->next = new_node;
        }
    }


   /* void preappend(int d)
    {
        Node* new_node = new Node(d);
        new_node->next = head;
        head = new_node;

    }*/

    /*
    void Insert(int d, int n)
    {
        Node* new_node = new Node(d);
        if(n == 1)
        {
            new_node->next = head;
            head = new_node;
        }

        else
        {
            Node* current = head;
            int i =1;
            while(i != n-1)
            {
                current = current->next;
                i++;
                //cout<<"Current Data"<<current->data;
            }
            new_node->next = current->next;
            current->next = new_node;
        }
    }
    */

    void Print()
    {
        cout<<"CONTENTS OF STACK ARE:";
        Node* current = head;
        while(current != NULL)
        {
            cout<<" "<<current->data;
            current = current->next;
        }
        cout << endl;
    }

    int Dequeue()
    {
        int val;

        if(head == NULL)
        {
            return -1;
        }

        else
        {
            val = head->data;
            head = head->next;
        }
        return val;
    }

    /*int POP()
    {

        if(head == NULL)
        {
            return -1;
        }

        else
        {
            Node* current = head;
            Node* prev = NULL;

            while(current->next != NULL)
            {
                prev = current;
                current = current->next;
            }

            prev->next = NULL;
            //delete current;
            //Delete(TOP());
            return current->data;
        }
    }*/


    int REAR()
    {
        int i = 1;
        Node* current = head;
        while(current->next != NULL){
            current = current->next;
            i++;
        }
        return current->data;
    }


    int FRONT()
    {
        return head->data;
    }

   /* int Search(int key){
        int pos =1;
        Node* current = head;

        while(current != NULL){
            if(current->data == key)
                return pos;
            current = current->next;
            pos++;
        }
        return -1;
    }
    */
     void Empty() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
    }

    // Update the value of a node at a given position
/*    void update(int value, int n) {
        Node* temp = head;
        for (int i = 1; i < n && temp != NULL; i++) { // traverse to the nth node
            temp = temp->next;
        }

        if (temp == NULL) { // if n is greater than the size of the list, don't update
            cout << "Position out of range\n";
            return;
        }

        temp->data = value; // update the value of the nth node
    }*/

};


int main()
{
    QUEUE q;
    q.ENQUEUE(1);
    q.ENQUEUE(3);
    q.ENQUEUE(4);
    q.ENQUEUE(5);
    q.ENQUEUE(6);

    q.Print();
//    cout<<"Popped Value is: "<<s.POP()<<endl;

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    q.Print();
    cout<<"FronT is: "<<q.FRONT()<<endl;
    cout<<"Rear is: "<<q.REAR()<<endl;
    return 0;
}
