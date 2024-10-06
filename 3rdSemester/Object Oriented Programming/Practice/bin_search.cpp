#include <string.h>
#include <iostream>

using namespace std;

int bin_search(int* a, int n,int x);

int main(){

    int arra[7] ={1,2,3,5,6,7,9};
    cout << "Index of 5 is " << bin_search(arra,7,5)<<endl;
    return 0;
}

int bin_search(int* a, int n,int x){
    int l,r,m;
    l = 0;
    r = n - 1;
    m =(l+r)/2;
    if (n == 0 || x <= a[0]) return 0;
    if (x > a[n-1]) return n;
    while(r - l > l){
        cout<<"1st Iteration"<<endl;
        cout<<"l: "<<l<<" r: "<<r<<" m: "<<m<<endl;
        m =(l+r)/2;
        (x <= a[m] ? r : l) = m;
        }
        return r;
}


