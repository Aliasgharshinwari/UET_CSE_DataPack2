#include <iostream>
using namespace std;

// OOP STARTS HERE...

class Complex
{ // class body

private: // Access specifier
    double re, im;

public:
    // CONSTRUCTOR
    // SPECIAL FUNCTION
    Complex()
    { // Initilization
        re = 0;
        im = 0;
    }

    // We need this function as data is secure
    void getComplex(double r, double i)
    {
        re = r;
        im = i;
    }

    // We need another function here
    void showComplex()
    {
        cout << re << "+i" << im << endl;
    }
};

int main()
{
    Complex c1, c2;

    system("cls");
    c1.getComplex(4, 2);
    c1.showComplex();

    // c2.getComplex(4,2);
    cout << "C2 before update" << endl;
    c2.showComplex();

    cout << "After update" << endl;
    c2.getComplex(4.5, 43.3);
    c2.showComplex();

    system("pause");
    return 0;
}
