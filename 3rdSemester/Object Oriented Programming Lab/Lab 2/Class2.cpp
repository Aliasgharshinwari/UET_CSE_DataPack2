#include <iostream>
using namespace std;

class Complex
{

private: // Access specifier
    double re, im;

public:
    // Prototypes
    Complex();
    Complex(double r, double i);
    void showComplex();
    void addComplex(Complex c1, Complex c2);
    Complex negComplex();

    //my function prototypes
    void subtractComplex(Complex c1, Complex c2);
    Complex conjugateComplex();


};

Complex::Complex()
{
    re = 0.0; im = 0.0;
}

Complex::Complex(double r, double i)
{
    re = r;  im = i;
}

void Complex::showComplex()
{
    if (im >= 0)
    cout<<re<<"+i"<<im<<endl;
    else
    cout<<re<<"-i"<<-im<<endl;
}

void Complex::addComplex(Complex c1, Complex c2)
{
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

void Complex::subtractComplex(Complex c1, Complex c2)
{
    re = c1.re - c2.re;
    im = c1.im - c2.im;
}
Complex Complex::negComplex(){
    Complex temp;
    temp.re = -re;
    temp.im = -im;
    return  temp;
}

Complex Complex::conjugateComplex(){
    Complex temp;

    temp.re = re;
    temp.im = -im;
    return  temp;
}
int main()
{
    Complex c1(2,4),c;

    c1.showComplex();

    Complex c2(1,2);
    c2.showComplex();

    c.addComplex(c1, c2);
    c.showComplex();

    Complex result = c1.negComplex();
    result.showComplex();

    c.subtractComplex(c1, c2);
    c.showComplex();

    Complex conjugate = c1.conjugateComplex();
    conjugate.showComplex();

    return 0;
}
