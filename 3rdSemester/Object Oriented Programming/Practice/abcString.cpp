#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char s[100] ="Something", t[100];
    strcpy(t, s);
    strcpy(t+8, "in C++.");
    cout << s << endl << t << endl;
    return 0;
}
