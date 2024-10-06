#include <stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    char s;

    cin >> n;
    s = (char) malloc (n);
    cout<<"Size ="<<sizeof(s);
    return 0;
}
