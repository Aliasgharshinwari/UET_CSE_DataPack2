#include<iostream>
using namespace std;

class square:public shape
{//child 2 class
public:
    void draw(){
        cout<<"draw a square"<<endl;
    }
};
