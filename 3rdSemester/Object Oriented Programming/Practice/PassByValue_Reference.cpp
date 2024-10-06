#include<iostream>
#include<iomanip>
#define line cout<<endl;// for endl
using namespace std;

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swap1(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swap2(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x=2, y=3;

    cout<<"By Value :"; line
    swap(x,y);
    cout<<"x = "<<x; line //2
    cout<<"y = "<<y; line line//3

    cout<<"By Reference : "; line
    swap1(x,y);
    cout<<"x = "<<x; line //3
    cout<<"y = "<<y; line line//2

    cout<<"By Pointers : "; line
    swap2(&x,&y);
    cout<<"x = "<<x; line
    cout<<"y = "<<y; line


return 0;
}
