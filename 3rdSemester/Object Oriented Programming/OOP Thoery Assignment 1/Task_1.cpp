#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x, y;
    system("cls");
    cout << "Enter your name: ";
    getline(cin, x);
    cout << "Enter your age: ";
    getline(cin, y);
    cout << "Your name is " << x << endl;
    cout << "Your age is " << y << endl;
    system("pause");
    return 0;
}
