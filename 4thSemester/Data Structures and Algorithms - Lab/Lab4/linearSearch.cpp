#include <iostream>
using namespace std;

int linear_search(int Array[], int key,int SIZE)
{

    for(int i=0; i<SIZE; i++){
        if(Array[i]== key)
            return i;
    }

    return -1;
}

int main()
{
    int SIZE = 5;
    int Array[SIZE] = {2, 3, 6, 2, 8};

    int i = linear_search(Array, 8, SIZE);
    if(i != -1)
        cout<<"Found: The Index is: "<<i<<endl;
    else
        cout<<"Not Found"<<endl;

    return 0;
}

