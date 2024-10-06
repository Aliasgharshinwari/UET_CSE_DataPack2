#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

int queue[SIZE];
int front = 0, rear = 0;

void enqueue (int elem){

    if(rear + 1 == front)
    {
        cout << "[ERROR] The queue is full..!" << endl;
        return;
    }


    queue[rear] = elem;

    if (rear == SIZE -1)
        rear = rear % (SIZE -1);
    else
        rear++;
}

void print (){
    if (front == rear)
    {
        cout << "[ERROR] no elements to print" << endl;
        return;
    }

    // where to start from
    int start, end, index;

    index = front < rear ? front : rear;

    if (index == front)
    {
        start = front;
        end   = rear;
    }
    else
    {
        start = rear;
        end   = front;
    }

    for (index = start; index < end; index++){
        //string delimeter = index == end-1 ? "\n" : ", ";
        //cout << queue[index] << delimeter;
        cout << queue[index];
    }
}

// deleting an element
int dequeue (){

    int temp = queue[front];
    if (front == rear)
    {
        cout << "[ERROR] no elements to print" << std::endl;
        exit(1);
    }
    else if (front == SIZE - 1)
        front = front % (SIZE - 1);
    else
        front++;

    return temp;
}

int main () {

    enqueue(10);
    enqueue(20);
    enqueue(30);


    dequeue();
    dequeue();
    dequeue();

    dequeue();

    print();
    return 0;
}
