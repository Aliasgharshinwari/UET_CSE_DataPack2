#include<iostream>
using namespace std;

int *makeNewArr(int p_ar[], int s){
    int *n_ar = new int[s + s];
    int i =0;

    for(; i< s; i++)
        n_ar[i] = p_ar[i];


    for(; i< 2 * s; i++)
        n_ar[i] = -1;


    return n_ar;

}
int main(){
    int n;
    cout<<"Enter Length of array:";
    cin>>n;

    int *ar = new int[n];

    cout<<"Enter the elements of the array:";

    for(int i=0; i<n; i++)
        cin>>*(ar+i);

    ar = makeNewArr(ar, n);

    for(int i =0; i< 2 * n; i++)
        cout<<" "<<ar[i];

    delete[] ar;

    return 0;
}
