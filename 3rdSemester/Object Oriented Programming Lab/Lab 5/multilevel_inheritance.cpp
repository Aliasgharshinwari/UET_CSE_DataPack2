#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class A
{
private:
    int a;

protected:
    int b;

public:
    int c;
    A():a(0),b(0),c(0) {}
    A(int aa, int bb, int cc):a(aa),b(bb),c(cc) {}

    void show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
        cout<<"c: "<<c<<endl;
        cout<<"----------------------------"<<endl;
    }

};

class B:public A
{
private:
    int d;

public:
    B():A(),d(0) {} //Constructor chaining
    B(int aa, int bb, int cc, int dd):A(aa,bb,cc),d(dd) {}

    void showB()
    {
        cout<<"d = "<<d<<endl;
    }
};

class C : public B
{
private:
    int e;
public:
    //C():A(),b(0){}
    C():B(),e(0) {} //Constructor chaining
    C(int aa, int bb, int cc, int dd, int ee):B(aa,bb,cc,dd),e(ee) {} //Constructor chaining

    void showC()
    {
        //cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
//        cout<<"d = "<<d<<endl;
        cout<<"e = "<<e<<endl;
    }

};

int main()
{

    C objC(5,7,7,6,7);

    objC.showC();
    objC.show();

    return 0;
}


//Observations question
//multiple and multilevel inheritence
