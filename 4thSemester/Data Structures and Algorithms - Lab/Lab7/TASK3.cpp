#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        next = NULL;
        prev = NULL;
    }

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class LinkedList
{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void append(int d){
        Node* new_node = new Node(d);

        if (head == NULL){
            head = new_node;
        }
        else{
            Node* current = head;

            while (current->next != NULL){
                current = current->next;
            }

            current->next = new_node;
            new_node->prev = current;
        }
    }

    void preappend(int d){
        Node* new_node = new Node(d);

        if (head == NULL){
            head = new_node;
        }
        else{
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
        }
    }

    void Insert(int d, int n){
        if (n == 1 || head == NULL){
            preappend(d);
        }
        else{
            Node* new_node = new Node(d);
            Node* current = head;
            int i = 1;

            while (i != n - 1 && current->next != NULL){
                current = current->next;
                i++;
            }

            new_node->next = current->next;
            new_node->prev = current;
            current->next = new_node;

            if (new_node->next != NULL){
                new_node->next->prev = new_node;
            }
        }
    }

    void Print(){
        cout << "CONTENTS OF LIST ARE: ";
        Node* current = head;

        while (current != NULL){
            cout << current->data << "<-->";
            current = current->next;
        }

        cout << endl;
    }

    void deleteFromStart(){
        if (head == NULL){
            return;
        }
        else{
            Node* temp = head;
            head = head->next;

            if (head != NULL){
                head->prev = NULL;
            }
            delete temp;
        }
    }

    void deleteEnd(){
        if (head == NULL){
            return;
        }
        else{
            Node* current = head;

            while (current->next != NULL){
                current = current->next;
            }

            if (current->prev != NULL){
                current->prev->next = NULL;
            }
            else{
                head = NULL;
            }

            delete current;
        }
    }

    void Delete(int n){
        if (n == 1){
            deleteFromStart();
        }
        else{
            Node* current = head;
            int i = 1;

            while (i != n && current != NULL){
                current = current->next;
                i++;
            }

            if (current == NULL){
                cout << "Position out of range" << endl;
                return;
            }

            current->prev->next = current->next;

            if (current->next != NULL){
                current->next->prev = current->prev;
            }

            delete current;
        }
    }

    int Size(){
        if (head == NULL){
            return 0;
        }

        int i = 1;
        Node* current = head;

        while (current->next != NULL){
            current = current->next;
            i++;
        }

        return i;
    }

    int Search(int key){
        if (head == NULL){
            return -1;
        }

        int pos = 1;
        Node* current = head;

        while (current != NULL){
            if (current->data == key){
                return pos;
            }

            current = current->next;
            pos++;
        }

        return -1;
    }

    void Empty(){
        Node* current = head;

        while (current != NULL){
            Node* temp = current;
            current = current->next;
            delete temp;
        }

        head = NULL;
    }

    void update(int value, int n){
        Node* temp = head;
        int i = 1;

        while (i < n && temp != NULL){
            temp = temp->next;
            i++;
        }

        if (temp == NULL){
            cout << "Position out of range" << endl;
        }
        else{
            temp->data = value;
        }
    }

    ~LinkedList(){
        Empty();
    }
};

int main(){
    LinkedList linkedList;
    linkedList.append(1);
    linkedList.append(2);
    linkedList.append(3);
    linkedList.preappend(3);
    linkedList.Delete(1);
    linkedList.Print();
    cout << "Size = " << linkedList.Size() << endl;
    cout << "Search = " << linkedList.Search(2) << endl;
    linkedList.Empty();
    linkedList.Print();

    return 0;
}
