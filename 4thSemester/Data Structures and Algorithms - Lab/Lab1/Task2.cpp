#include<iostream>
using namespace std;

int maxValue(int arr[], int size);

int main(){
    int n=0;
    cout<<"Enter Length of array:";
    cin>>n;

    int a1[n];

    cout<<"Enter the elements of the array:";

    for(int i=0; i<n; i++)
        cin>>a1[i];

    int returnedValue = maxValue(a1, n);

    cout<<"returnedValue = "<<returnedValue<<endl;
    return 0;
}

int maxValue(int arr[], int size){
    int temp = arr[0];

    for(int i=0; i<size; i++){
         if(temp < arr[i])
            temp = arr[i];
    }
    return temp;
}
