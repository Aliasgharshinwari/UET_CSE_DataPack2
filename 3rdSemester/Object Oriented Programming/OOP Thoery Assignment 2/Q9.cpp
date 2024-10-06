#include <iostream>
using namespace std;

void f(int n)
{
    if (n > 0)
    {
        f(n - 2);
        cout << n <<  " ";
        f(n - 1);
    }
}

int main()
{
    int n = 1;
    int k;
    cout << "Enter k" ;
    cin >> k;
    cout <<"Output: \n";
    f(k);
    //-n++;
    //cout<<-n;
    return 0;
}
