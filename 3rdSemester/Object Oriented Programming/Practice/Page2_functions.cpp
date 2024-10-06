#include <string.h>
#include <iostream>

using namespace std;

float fun(float,float, int, int);

int main()
{
    float fun(float x, float y, int i, int j);
    float xx, yy;
    int ii, jj;
    cout << "Enter two real numbers followed by two integers:\n";
    cin >> xx >> yy >> ii >> jj;
    cout << "Value returned by function:"
         << fun(xx, yy, ii, jj) << endl;
    return 0;
}


float fun(float x, float y, int i, int j)
{
    float a = x - y;
    int b = i - j;
    return b != 0 ? a/b :
           a > 0 ? +1e20 :
           a < 0 ? -1e20 : 0.0;
}
