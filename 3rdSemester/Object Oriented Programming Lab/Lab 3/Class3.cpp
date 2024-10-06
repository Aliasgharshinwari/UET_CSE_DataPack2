    #include <iostream>
using namespace std;

// Complex class with 2 data members and 8 member functions
class Complex
{

private:
    double re, im;
    static int countObjects;

public:
    Complex();
    Complex(double r, double i);
    void setRe(double r);
    void setIm(double i);
    double getRe() const; 
    double getIm() const;
    static int getCount();
    void showComplex() const;
    ~Complex();
};

int Complex::countObjects = 0;

Complex::Complex(){    re = 0.0; im = 0.0; countObjects++;}

Complex::Complex(double r, double i){ re = r; im = i; countObjects++;}
void Complex::setRe(double r) { re = r; }
void Complex::setIm(double i) { im = i; }
double Complex::getRe() const{ return re; } 
double Complex::getIm() const{ return im; }
int Complex::getCount(){ return countObjects; }

void Complex::showComplex() const{
    if (im >= 0) cout<<"Complex Number:" << re << "+i" << im << endl;
    else cout <<"Complex Number:" << re << "-i" << -im << endl;
}
Complex::~Complex(){
    cout<<"Object Destroyed"<<endl;
}

const int SIZE = 3;

main()
{
    Complex *C = new Complex(); //new will create object in heap memory

    system("cls");
    // cout<<"initial stage count: "<<Complex::getCount()<<endl;

    // Complex c[SIZE];
    // double r,i;
    
    // for (int num = 0; num < SIZE; num++)
    // {
    //      cout<<"Enter re,im: ";  
    //      cin>>r>>i;
    //      c[num].setRe(r);
    //      c[num].setIm(i);
    // }

    // for (int num = 0; num < SIZE; num++)
    //     c[num].showComplex();
    
    // cout<<"Final stage count: "<<Complex::getCount()<<endl;
    C->showComplex(); //pointer notation
    C->setRe(2);
    C->showComplex();
    C->setIm(2);
    C->showComplex();

    delete C;
    system("pause");
}
