#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        next = NULL;
    }

    Node(int d){
        data = d;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;

    LinkedList(){
        head = NULL;
        tail = NULL;
    }

    void append(int d){
        Node* new_node = new Node(d);

        if (head == NULL){
            head = new_node;
            tail = new_node;
            tail->next = head; // Make it circular
        }
        else{
            new_node->next = head;
            tail->next = new_node;
            tail = new_node;
        }
    }

    void preappend(int d){
        Node* new_node = new Node(d);
        if (head == NULL){
            head = new_node;
            tail = new_node;
            tail->next = head; // Make it circular
        }
        else{
            new_node->next = head;
            head = new_node;
            tail->next = head; // Update tail's next pointer
        }
    }

    void Insert(int d, int n){
        if (n <= 0){
            cout << "Invalid position\n";
            return;
        }

        if (n == 1){
            preappend(d);
            return;
        }

        Node* new_node = new Node(d);
        Node* current = head;
        int i = 1;
        while (i < n - 1 && current != tail){
            current = current->next;
            i++;
        }
        if (current == tail){
            cout << "Position out of range\n";
            return;
        }

        new_node->next = current->next;
        current->next = new_node;
        if (current == tail)
            tail = new_node; // Update tail if the new node is inserted at the end
    }

    void deleteFromStart(){
        if (head == NULL){
            return;
        }

        if (head == tail){
            delete head;
            head = NULL;
            tail = NULL;
        }
        else{
            Node* temp = head;
            head = head->next;
            tail->next = head; // Update tail's next pointer
            delete temp;
        }
    }

    void deleteEnd(){
        if (head == NULL){
            return;
        }

        if (head == tail){
            delete head;
            head = NULL;
            tail = NULL;
        }
        else{
            Node* current = head;
            Node* prev = NULL;

            while (current->next != head){
                prev = current;
                current = current->next;
            }

            prev->next = head;
            tail = prev; // Update tail to the new last node
            delete current;
        }
    }

    void Delete(int n){
        if (n <= 0){
            cout << "Invalid position\n";
            return;
        }

        if (n == 1){
            deleteFromStart();
            return;
        }

        Node* current = head;
        Node* prev = NULL;
        int i = 1;
        while (i < n && current != tail){
            prev = current;
            current = current->next;
            i++;
        }
        if (current == tail){
            cout << "Position out of range\n";
            return;
        }

        prev->next = current->next;
        delete current;
        if (prev->next == head)
            tail = prev; // Update tail if the last node is deleted
    }

    int Search(int key){
        if (head == NULL){
            return -1;
        }

        Node* current = head;
        int pos = 1;
        do{
            if (current->data == key)
                return pos;
            current = current->next;
            pos++;
        }
        while (current != head);

        return -1;
    }

    void update(int value, int n){
        if (n <= 0){
            cout << "Invalid position\n";
            return;
        }

        Node* temp = head;
        int i = 1;
        while (i < n && temp != tail){
            temp = temp->next;
            i++;
        }

        if (temp == tail && i < n){
            cout << "Position out of range\n";
            return;
        }

        temp->data = value;
    }

    void Empty(){
        if (head == NULL){
            cout << "List is already empty\n";
            return;
        }

        Node* current = head;
        while (current != tail){
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        delete current;
        head = NULL;
        tail = NULL;
    }

    int Size(){
        if (head == NULL){
            return 0;
        }

        int count = 0;
        Node* current = head;
        do{
            count++;
            current = current->next;
        }
        while (current != head);

        return count;
    }

    void Print(){
        if (head == NULL){
            cout << "List is empty\n";
            return;
        }

        cout << "CONTENTS OF LIST ARE:";
        Node* current = head;
        do{
            cout << " " << current->data;
            current = current->next;
        }
        while (current != head);
        cout << endl;
    }

    ~LinkedList(){
        if (head != NULL){
            Node* current = head;
            Node* nextNode = head->next;
            while (nextNode != head)
            {
                delete current;
                current = nextNode;
                nextNode = nextNode->next;
            }
            delete current;
        }
    }
};

int main(){
    LinkedList linkedList;
    linkedList.append(1);
    linkedList.append(2);
    linkedList.append(3);
    linkedList.preappend(0);
    //linkedList.Insert(4, 5);
    linkedList.Print();

    linkedList.deleteFromStart();
    linkedList.deleteEnd();
    linkedList.Delete(2);
    linkedList.Print();

    int searchResult = linkedList.Search(2);
    if (searchResult != -1)
        cout << "Key found at position: " << searchResult << endl;
    else
        cout << "Key not found\n";

    linkedList.update(10, 1);
    linkedList.Print();
    linkedList.Empty();
    linkedList.Print();
    cout << "Size of the list: " << linkedList.Size() << endl;
    return 0;
}
