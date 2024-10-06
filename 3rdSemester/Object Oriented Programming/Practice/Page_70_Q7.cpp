#include<iostream>
using namespace std;

void sort4(int &a, int &b, int &c, int &d){
    for(int i =1; i<=4; i++){
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }

        if(b > c){
            int temp = b;
            b = c;
            c = temp;
        }

        if(c > d){
            int temp = c;
            c = d;
            d = temp;
        }

    }
}


int main()
{
    int w = 6, x =4, y =3, z = 9;

    sort4(w,x,y,z);
    cout<<"a = "<<w<<" b = "<<x<<" c = "<<y<<" d = "<<z<<endl;
    return 0;
}
