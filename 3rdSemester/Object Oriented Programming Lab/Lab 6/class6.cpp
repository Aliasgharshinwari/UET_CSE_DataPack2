#include <iostream>
#include "abc.cpp"
using namespace std;

//Abstract will be a prototype, model module type. we dont make objects
//
class shape
{//base class //abstract class
public:
    //pure virtual function
    virtual void draw() = 0;
};

class circle:public shape
{//child 1 class
public:
    void draw(){
        cout<<"draw a circle"<<endl;
    }

};


class square:public shape
{//child 2 class
public:
    void draw(){
        cout<<"draw a square"<<endl;
    }
};

int main()
{
    circle c1;
    square s1;
    shape *sh_ptr;
//    shape sh_obj;


//    sh_ptr = &sh_obj;
//    sh_ptr->draw();

    sh_ptr = &c1;
    sh_ptr->draw();

    sh_ptr = &s1;
    sh_ptr->draw();
    return 0;
}
