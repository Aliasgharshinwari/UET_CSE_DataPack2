#include<iostream>
using namespace std;

int main(){
    int n=0;
    float res=0;
    float *p;

    cout<<"Enter Length of array:";
    cin>>n;
    p = new float[n];
    cout<<"Enter the elements of the array:";

    for(int i=0; i<n; i++)
        cin>>*(p+i);

    for(int i=0; i<n; i++)
        res += *(p+i);

    cout<<"Average of the array:"<<(res/n);

    delete p;

    return 0;
}
