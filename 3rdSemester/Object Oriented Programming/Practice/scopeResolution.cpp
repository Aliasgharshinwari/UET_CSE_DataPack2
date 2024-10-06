#include <iostream>
using namespace std;

int i = 1;

int main()
{
    int i=2;
    cout << ::i << endl; // Output: 1 (global variable)
    cout << i << endl; // Output: 2 (local variable)
    return 0;
    return 0;
}
