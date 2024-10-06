#include <iostream>
using namespace std;

int smallest(int* ptr){
    int small = *ptr;

    for(int i=0; i<5; i++){
            if(*(ptr+i) < small)
                small = *(ptr+i);
    }
    return small;
}
int main ()
{
    //int arr[5]={4,5,3,5,2};
    //cout<<smallest(arr);
    cout<<*("ABC"+3);
    return 0;
}



