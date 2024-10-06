#include <iostream>
#define pie 3.14
using namespace std;

class shape
{
protected:
    float area, volume;

public:
    virtual void display() = 0;
    virtual float Calc_area() = 0;
    virtual float Calc_volume() = 0;
};

class point:public shape
{
protected:
    float x,y;
public:
    point(){
        x =0; y=0;
    }

    point(int a, int b){
        x =a; y=b;
    }

    float Calc_area()
    {

    }
    float Calc_volume()
    {

    }

    void display(){
        cout<<"Position Of Point is"<<"("<<x<<","<<y<<")"<<endl;
    }
};

class circle:public point
{
protected:
    float radius = 0.00;
public:
    circle(){
        radius = 1;
        x = 0; y = 0;
    }

    circle(int a, int b,int r){
        radius = r;
        x = a; y = b;
    }
    float Calc_area()
    {
        area = pie * (radius * radius);
        return area;
    }

    float Calc_volume()
    {
        return 0;
    }

    void display()
    {
        cout<<"Position of Circle is:"<<"("<<x<<","<<y<<")"<<endl;
        cout<<"Area of Circle is:"<<area<<endl;
    }
};

class cylinder:public circle
{
protected:
    float height;
public:
    cylinder(){
        radius = 1;
        x = 0; y = 0;
        height = 0;
    }

    cylinder( int a, int b, int h, int r){
        radius = r;
        x = a; y = b;
        height = h;
    }

    float Calc_area()
    {
        area = pie * (radius * radius);
        return area;
    }
    float Calc_volume()
    {
        volume = pie * (radius * radius) * height;
        return volume;
    }

    void display()
    {
        cout<<"Position of Cylinder is:"<<"("<<x<<","<<y<<")"<<endl;
        cout<<"Volume of Cylinder is:"<<volume<<endl;
    }
};

int main()
{
    shape *sh_ptr;
    point p(2,3);
    circle c1(1,2,3);
    cylinder cyl(1,4,3,4);

    sh_ptr = &p;
    sh_ptr->display();

    sh_ptr = &c1;
    sh_ptr->Calc_area();
    sh_ptr->display();

    sh_ptr = &cyl;
    sh_ptr->Calc_volume();
    sh_ptr->display();
    return 0;
}
