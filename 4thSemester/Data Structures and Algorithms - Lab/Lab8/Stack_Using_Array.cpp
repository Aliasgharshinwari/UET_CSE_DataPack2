#include <iostream>

using namespace std;

class STACK {
private:
    int* items;
    int capacity;
    int count;

public:
    STACK() {
        capacity = 10;
        count = 0;
        items = new int[capacity];
    }

    void create() {
        delete[] items;
        capacity = 10;
        count = 0;
        items = new int[capacity];
    }

    void create(int SIZE) {
        delete[] items;
        capacity = SIZE;
        count = 0;
        items = new int[capacity];
    }
/*
    void add(int item, int index) {
        if (index < 0 || index > count) {
            throw out_of_range("Index out of range");
        }

        if (count == capacity) {
            int* newItems = new int[capacity * 2];
            for (int i = 0; i < count; i++) {
                newItems[i] = items[i];
            }
            delete[] items;
            items = newItems;
            capacity *= 2;
        }

        for (int i = count - 1; i >= index; i--) {
            items[i + 1] = items[i];
        }
        items[index] = item;
        count++;
    }
*/

    void PUSH(int item) {

        if (count == capacity) {
            int* newItems = new int[capacity * 2];
            for (int i = 0; i < count; i++) {
                newItems[i] = items[i];
            }
            delete[] items;
            items = newItems;
            capacity *= 2;
        }

        items[count] = item;
        count++;
    }
/*
    void remove(int index) {
        if (index < 0 || index >= count) {
            throw out_of_range("Index out of range");
        }
        for (int i = index; i < count - 1; i++) {
            items[i] = items[i + 1];
        }
        count--;
    }
*/

    int POP() {
        if(is_empty()){
            cout<<"Cannot Pop. Stack is empty[Stack Underflow]"<<endl;
            return -1;
        }
        int poppedItem = items[count-1];
        count--;
        return poppedItem;
    }


    bool is_empty() {
        return count == 0;
    }



    int TOP() {
        if (count == 0) {
            return -1;

        }
        return count - 1;
    }

    void Print() {
        if (count == 0) {
            cout<<"Stack is empty"<<endl;
            return;
        }

        cout<<"CONTENTS OF STACK ARE:";

        for (int i = 0; i < count; i++) {
            cout<<" "<<items[i];
        }
        cout<<endl;
    }

    ~STACK() {
        delete[] items;
    }
};

int main() {
    STACK myStack;
    myStack.PUSH(1);
    myStack.PUSH(2);
    myStack.PUSH(3);
    myStack.PUSH(4);
    myStack.PUSH(5);
    myStack.PUSH(6);
    myStack.PUSH(7);
    myStack.PUSH(8);
    myStack.PUSH(9);
    myStack.PUSH(10);
    myStack.PUSH(11);
    myStack.Print();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.POP();
    myStack.Print();
    cout<<"Top Index is: "<<myStack.TOP()<<endl;

    return 0;
}

