#include <iostream>
#define pi 3.14
// #include< >
#define line cout << endl; // for endl
using namespace std;

class shape
{
protected:
    float area, volume;

public:
    virtual void Area(){};
    virtual void Volume(){};
    virtual void display() = 0;
};

class point : public shape
{
    protected:
    float x, y;
    public:
    point(){
        x=0;
        y=0;
    }
    point(float xx, float yy){
        x=xx;
        y=yy;
    }
    void display(){
        cout<<"(x,y) = "<<" ("<<x<<","<<y<<")";
    }
};

class Circle:public point{
    protected:
    float radius;
    public:
    Circle(){
        radius=0;
        x=0;
        y=0;
    }
    Circle(float r, float xx, float yy){
        radius=r;
        x=xx;
        y=yy;
    }
    void Area(){
        area=pi*(radius*radius);
    }
    void display(){
        cout<<"The area of circle is = "<<area;
    }
};

class Cylinder:public Circle{
    protected:
    float height;
    public:
    Cylinder(){
        height=0;
        radius=0;
        x=0;
        y=0;
    }
    Cylinder(float h,float r, float xx, float yy){
        height=h;
        radius=r;
        x=xx;
        y=yy;
    }
    void Volume(){
        volume=pi*(radius*radius)*height;
    }
    void dispaly(){
        cout<<"Volume Of Cylinder is = "<<volume;
    }
};

int main()
{
    shape *s1;
    point p;
    Circle c1;
    Cylinder Cy1;
    return 0;
}
