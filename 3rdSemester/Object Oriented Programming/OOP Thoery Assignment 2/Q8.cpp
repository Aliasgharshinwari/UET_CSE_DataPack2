#include <iostream>
using namespace std;

void sort4_2(int &a, int &b, int &c, int &d)
{
    for (int i = 0; i < 4; i++)
    {
        if (a > b){
            int temp = a;
            a = b;
            b = temp;
        }

        if (b > c){
            int temp = b;
            b = c;
            c = temp;
        }

        if (c > d){
            int temp = c;
            c = d;
            d = temp;
        }
    }
}

int main()
{

    int a = 1, b = 4, c = 6, d = 2;
    sort4_2(a, b, c, d);
    cout << a << b << c << d;
    return 0;
}
