#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node* next;

    Node(int d){
        data=d;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    LinkedList(Node *h){
        head = h;
    }

   // Add a new node to the end of the linked list
    void add(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    // Traverse the linked list and print the values of all nodes
    void traverse() {
        Node* current = head;

        while (current != NULL) {
            cout << current->data << "-->";
            current = current->next;
        }
        cout <<endl;
    }

    // Delete the first node with the specified value from the linked list
    void delete_node(int val) {
        if (head == NULL) {
            return;
        }
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        Node* prev = NULL;
        while (current != NULL && current->data != val) {
            prev = current;
            current = current->next;
        }
        if (current != NULL) {
            prev->next = current->next;
            delete current;
        }
    }
};

int main(){
    LinkedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    cout << "Linked List: ";
    list.traverse();
    list.delete_node(3);
    cout << "Linked List after deleting 3: ";
    list.traverse();
    return 0;
}
