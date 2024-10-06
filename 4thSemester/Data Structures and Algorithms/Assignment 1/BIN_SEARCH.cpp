#include<iostream>
using namespace std;

int bin_search(int arr[], int key, int l, int n, int &c);

int main(){
    int num_ar[10] = {0,4,7,10,14,15,19,20,28,30};
    int x;
    int counter = 0;
    cout<<"Enter number btw 0-30"<<endl;
    cin>>x;

    int i = bin_search(num_ar, x , 0, 9,counter);

    if(i != -1)
        cout<<"Index of "<<x<<" is:"<<i<<endl;
    else
        cout<<"Target["<<x<<"] Not Found "<<endl;

    cout<<"Number of iterations: "<<counter<<endl;
    return 0;
}

int bin_search(int arr[], int key, int l, int n, int &c){
    int m;

    if(l > n)
        return (-1);

    m=(l+n)/2;
    c++;

    if(key == arr[m])
          return m;

    if(key < arr[m])
          return (bin_search(arr,key,l,m-1,c));

    else
          return (bin_search(arr,key,m+1,n,c));

}

