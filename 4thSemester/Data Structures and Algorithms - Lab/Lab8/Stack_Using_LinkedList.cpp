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

class STACK
{

public:
    Node* head;

    STACK()
    {
        head = NULL;
    }

    void PUSH(int d)
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

    void deleteFromStart()
    {

        if(head == NULL)
        {
            return;
        }

        else
        {
            head = head->next;

        }
    }

    int POP()
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
    }

    void Delete(int n)
    {

        if(n == 1)
        {
            deleteFromStart();
        }

        else
        {
            Node* current = head;
            Node* prev = NULL;
            int i =1;
            while(i != n)
            {
                prev = current;
                current = current->next;
                i++;

            }
            prev->next = current->next;
            current->next = NULL;
        }
    }


    int TOP()
    {
        int i = 1;
        Node* current = head;
        while(current->next != NULL){
            current = current->next;
            i++;
        }
        return i;
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

    void Empty(){
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
    STACK s;
    s.PUSH(1);
    s.PUSH(3);
    s.PUSH(4);
    s.PUSH(5);
    s.PUSH(6);


    s.Print();
    cout<<"Popped Value is: "<<s.POP()<<endl;

    s.Print();
    cout<<"Index of Top is: "<<s.TOP()<<endl;
    return 0;
}
