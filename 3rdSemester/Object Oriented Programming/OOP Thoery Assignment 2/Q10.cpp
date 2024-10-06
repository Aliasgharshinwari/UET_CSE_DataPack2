#include <iostream>
using namespace std;

int gcd(int x,int y)
{
    if(!y){
        cout<<"IF"<<endl;
        return x;
    }
    else
        {
        cout<<"ELSE"<<"x%y = "<<x%y<<endl;

            return gcd(y,x%y);
        }
}

int main()
{
    int x=4,y=12;
    cout<<"Enter x and y";
    cin>>x>>y;
    cout<<"GCD="<<gcd(x,y);
    return 0;
}
