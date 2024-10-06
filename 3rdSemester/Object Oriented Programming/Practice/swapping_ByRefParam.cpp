#include<iostream>
using namespace std;

void swap1(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

 int g(double x, double y)
    {
        return x * x - y * y + 1;
    }

int main()
{
    int x, y;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    //swap1(x,y);
    //swap2(&x,&y);
    //cout<<"X: "<<x<<" Y: "<<y<<endl;

    cout<<"G = "<<g(x,y);
    return 0;


}
