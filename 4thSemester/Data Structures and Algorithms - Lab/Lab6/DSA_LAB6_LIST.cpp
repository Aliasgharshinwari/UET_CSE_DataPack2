#include <iostream>
#include <stdexcept>
using namespace std;

class List {
private:
    int* items;
    int capacity;
    int count;

public:
    List() {
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

    void remove(int index) {
        if (index < 0 || index >= count) {
            throw out_of_range("Index out of range");
        }
        for (int i = index; i < count - 1; i++) {
            items[i] = items[i + 1];
        }
        count--;
    }

    int size() {
        return count;
    }

    bool is_empty() {
        return count == 0;
    }

    int get(int index) {
        if (index < 0 || index >= count) {
            throw out_of_range("Index out of range");
        }
        return items[index];
    }

    int end() {
        if (count == 0) {
            throw out_of_range("List is empty");
        }
        return items[count - 1];
    }

    int start() {
        if (count == 0) {
            throw out_of_range("List is empty");
        }
        return items[0];
    }

    ~List() {
        delete[] items;
    }
};

int main() {
    List mylist;
    mylist.add(10, 0); // add 10 to the beginning of the list
    mylist.add(20, 1); // add 20 to the end of the list
    mylist.add(30, 1); // add 30 to the middle of the list
    cout << "List size: " << mylist.size() << endl; // prints 3
    cout << "List content: ";
    for (int i = 0; i < mylist.size(); i++) {
        cout << mylist.get(i) << " "; // prints 10 30 20
    }
    cout << endl;
    mylist.remove(1); // remove the second element (30)
    cout << "List size: " << mylist.size() << endl; // prints 2
    cout << "List content: ";
    for (int i = 0; i < mylist.size(); i++) {
        cout << mylist.get(i) << " "; // prints 10 20
    }
    cout << endl;
    cout << "First element: " << mylist.start() << endl; // prints 10
    cout << "Last element: " << mylist.end() << endl; // prints 20
    mylist.create(); // clear the list
    cout << "List size: " << mylist.size() << endl; // prints 0
    cout << "Is list empty? " << mylist.is_empty() << endl; // prints 1 (true)
    return 0;
}

