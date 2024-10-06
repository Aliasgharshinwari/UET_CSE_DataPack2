#include <iostream>
using namespace std;

class QUEUE {
private:
    int* items;
    int capacity = 10;
    int count;

public:
    QUEUE() {
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

    void ENQUEUE(int item) {

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

    int Dequeue() {
        //int Item;
        if(is_empty()){
            cout<<"Cannot Pop. Stack is empty[Stack Underflow]"<<endl;
            return -1;
        }
        int Item = items[0];


        for(int i = 0; i<count-1; i++){
            items[i] = items[i+1];
        }

        count--;
        return Item;
    }


    bool is_empty() {
        return count == 0;
    }



    int REAR() {
        if (count == 0) {
            return -1;

        }
        return items[count-1];
    }


    int FRONT() {
        if (count == 0) {
            return -1;
        }

        return items[0];
    }

    void Print() {
        if (count == 0) {
            cout<<"Stack is empty"<<endl;
            return;
        }

        cout<<"CONTENTS OF QUEUE ARE:";

        for (int i = 0; i < count; i++) {
            cout<<" "<<items[i];
        }
        cout<<endl;
    }

    ~QUEUE() {
        delete[] items;
    }
};

int main() {
    QUEUE q;
    q.ENQUEUE(1);
    q.ENQUEUE(3);
    q.ENQUEUE(5);
    q.Print();

    q.Dequeue();
    //q.Dequeue();
    q.Print();

    cout<<"Front is:"<<q.FRONT()<<endl;
    cout<<"Rear is:"<<q.REAR()<<endl;
    return 0;
}

