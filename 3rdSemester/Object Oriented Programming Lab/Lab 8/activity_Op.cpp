#include <iostream>
#define line cout << endl; // for endl
using namespace std;

class complex
{
private:
    double re, im;

public:
    complex() : re(0), im(0){};
    complex(double r, double i) : re(r), im(i){};
    void show()
    {
        cout << "Complex Number : " << re << "+i" <<"("<< im<<")";
        line
    }

    // Operator Overloading for binary
    complex operator+(complex rhs)
    {
        complex temp;
        temp.re = re + rhs.re;
        temp.im = im + rhs.im;
        return temp;
    }

    complex operator-(complex rhs)
    {
        complex temp;
        temp.re = re - rhs.re;
        temp.im = im - rhs.im;
        return temp;
    }

    complex operator*(complex rhs)
    {
        complex temp;
        temp.re = (re*rhs.re) - (im*rhs.im);
        temp.im = (re*rhs.im) + (im*rhs.re);
        return temp;
    }

    complex operator/(complex rhs)
    {
        complex temp;
        temp.re = ((re*rhs.re)+(im*rhs.im)) / ((rhs.re*rhs.re)+(rhs.im*rhs.im));
        temp.im = ((rhs.re*im)-(re*rhs.im)) / ((rhs.re*rhs.re)+(rhs.im*rhs.im));

        return temp;
    }

    // Operator Overloading for unary
    void operator++()
    {
        ++re;
        ++im;
    }
    void operator--()
    {
        --re;
        --im;
    }

};

int main()
{
    complex c1(2,3), c2(4,5), c3;

    line
    cout<<"First Number :";line
    c1.show();line

    cout<<"Second Number :";line
    c2.show();line

    c3 =c1.operator+(c2);
    cout<<"Sum of 1st and 2nd Number :";line
    c3.show();line

    ++c3;
    cout<<"Output After incrementing :";line
    c3.show();

    line
    --c3;
    cout<<"Output After decrementing :";line
    c3.show();

    line
    c3 = c1 - c2;
    cout<<"Subtraction of Complex Number  ";line
    c3.show();

    line
    c3 = c1 * c2;
    cout<<"Multiplication of Complex Number  ";line
    c3.show();

    line
    c3 = c1 / c2;
    cout<<"Division of Complex Number  ";line
    c3.show();

    return 0;
}
