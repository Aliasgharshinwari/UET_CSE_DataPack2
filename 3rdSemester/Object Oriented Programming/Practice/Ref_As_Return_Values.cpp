#include <string.h>
#include <iostream>

using namespace std;

int &smaller(int &x, int &y)
{
    return (x < y ? x : y);
}
int main()
{
    int a=23, b=15;
    cout << "a = " << a << " b = " << b << endl;
    cout << "The smaller of these is "
         << smaller(a, b) << endl;
    smaller(a, b) = 0; // a function on the LHS!
cout << " The smaller of a and b is set to 0:";
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
