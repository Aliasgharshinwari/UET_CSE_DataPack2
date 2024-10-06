#include <iostream>
using namespace std;

void linear_search(int Array[], int SIZE)
{
    int peak[SIZE];

    if (Array[0] > Array[1]) {
        peak[0] = Array[0];
        cout << "PEAK AT: " << 0 << endl;
    }

    for(int i=1; i<SIZE; i++){
        if(Array[i] > Array[i-1] && Array[i] > Array[i+1]){
            peak[i] = Array[i];
            cout<<"PEAK AT: "<<i<<endl;
        }
    }

    if(Array[SIZE-1] > Array[SIZE-2]){
        peak[SIZE-1] = Array[SIZE-1];
        cout<<"PEAK AT: "<<SIZE-1<<endl;
    }
}

int main()
{
    int SIZE = 5;
    int Array[SIZE] = {6, 3, 6, 2, 8};

    linear_search(Array, SIZE);

    return 0;
}

