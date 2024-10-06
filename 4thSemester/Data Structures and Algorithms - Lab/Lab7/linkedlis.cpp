#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class LIST{
public:
    Node* head;

    LIST(){
        head = NULL;
    }

    void append(int d){
        Node* new_node = new Node(d);

        if(head == NULL)
            head = new_node;

        else{
            Node* current = head;
            while(current->next != NULL)
                current = current->next;

            current->next = new_node;
        }
    }
    void preappend(int d){
        Node* new_node = new Node(d);

        if(head == NULL)
            head = new_node;

        else{
            Node* current = head;

            ;
        }
    }

    void traverse() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

};

int main(){

    LIST l1;
    l1.append(4);
    l1.append(5);
    l1.append(6);
    l1.traverse();
    return 0;
}
