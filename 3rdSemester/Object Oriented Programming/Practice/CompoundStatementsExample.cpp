#include<iostream>
using namespace std;
int main()
{
    float x = 3.4;
    {
        cout << "x = " << x << endl;
// output: x = 3.4 (because float x is visible
        int x = 7;
        cout << "x = " << x << endl;
// output x = 7 (because int x is visible
// float x is still in scope but hidden
//        char x = 'A';
        cout << "x = " << x << endl;
// output x = A (because char x is visible
// float x and int x are still in scope but hidden
    } // end of block
    cout << "x = " << x << endl;
// output x = 3.4 (because char x is visible
// int x and char x are out of scope
    return 0;
} // end of main
