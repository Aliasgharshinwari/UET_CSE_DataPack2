#include<iostream>
using namespace std;

void _sort(int arr[], int n);

int main()
{
    int num_ar[10] = {9,8,7,6,5,4,3,2,1,0};

    _sort(num_ar,10);

    cout<<"SORTED ARRAY IS: "<<endl;
    for(int i=0; i<10; i++)
        cout<<num_ar[i]<<" ";

    return 0;
}

void _sort(int arr[], int n)
{
    int temp;

    for(int i=0; i<n; i++){

        for(int j=0; j<n-1; j++){

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

