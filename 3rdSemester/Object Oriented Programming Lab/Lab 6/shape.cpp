#include<iostream>
using namespace std;

//Abstract will be a prototype, model module type. we dont make objects
class shape
{//base class //abstract class
public:
    //pure virtual function
    virtual void draw() = 0;
};
