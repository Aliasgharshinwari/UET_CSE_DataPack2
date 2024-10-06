#include<iostream>
using namespace std;

int *mergeArr(int arA[], int arB[], int sizeA,  int sizeB){

    int *n_ar = new int[sizeA + sizeB];


    for(int i =0; i< sizeA; i++)
        n_ar[i] = arA[i];


    for(int i =0; i< sizeB; i++)
        n_ar[sizeA + i] = arB[i];

    return n_ar;

}

int main(){
    int n1, n2;
    cout<<"Enter Length of array 1:";
    cin>>n1;

    cout<<"Enter Length of array 2:";
    cin>>n2;

    int *ar1 = new int[n1];
    int *ar2 = new int[n2];

    cout<<"Enter the elements of the array 1:";
    for(int i=0; i<n1; i++){
        cin>>*(ar1+i);
    }

    cout<<"Enter the elements of the array 2:";
    for(int i=0; i<n2; i++){
        cin>>*(ar2+i);
    }

    int *ar = new int[n1+n2];

    ar = mergeArr(ar1, ar2, n1, n2);

    for(int i =0; i< (n1+n2); i++)
        cout<<" "<<ar[i];

    delete[] ar;

    return 0;
}
