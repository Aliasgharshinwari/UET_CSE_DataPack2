#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class A
{
private:
    int x;

protected:
    int y;

public:
    int z;
    A():x(0),y(0),z(0) {}
    A(int xx, int yy, int zz):x(xx),y(yy),z(zz) {}

    void show()
    {
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"z: "<<z<<endl;
        cout<<"----------------------------"<<endl;
    }

};

class B{
private:
    int w;

public:
    B():w(0){}//Constructor chaining
    B(int ww):w(ww){}
    void showB(){
        cout<<"w = "<<w<<endl;
    }
};

class C : public A, public B
{
private:
    int d;
public:
    C():A(),d(0){}//Constructor chaining
    C(int xx,int yy,int zz, int dd):A(xx,yy,zz),d(dd){}//Constructor chaining

    void showC(){
    }
};

int main()
{
    A objA(2,3,4);
    B objB(2);
    C objC(5,7,8,9);

    objA.show();

    objB.showB();
    objC.show();

    return 0;
}

//Observations question
//multiple and multilevel inheritence
