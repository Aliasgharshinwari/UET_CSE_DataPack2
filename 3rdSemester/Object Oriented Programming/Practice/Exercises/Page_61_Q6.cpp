#include<iostream>
using namespace std;

int main()
{
    int n[5] = {5,4,5,8,5};
    int k;
    for(int i =0; i<5; i++){
       if(n[i+1]<n[i])
        k++;
    }
    cout<<"K:"<<k;

    return 0;
}
