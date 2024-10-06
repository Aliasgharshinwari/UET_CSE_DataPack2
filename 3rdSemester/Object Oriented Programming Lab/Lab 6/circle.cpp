#include<iostream>
using namespace std;

class circle:public shape
{//child 1 class
public:
    void draw(){
        cout<<"draw a circle"<<endl;
    }
};
