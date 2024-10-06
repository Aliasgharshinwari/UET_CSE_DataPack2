#include <iostream>
#define pie 3.14
using namespace std;

class Point
{

protected:
    float x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }

    Point(float xx, float yy)
    {
        x = xx;
        y = yy;
    }

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }

    void setX(float xx)
    {
        x = xx;
    }

    void setY(float yy)
    {
        x = yy;
    }

    void display()
    {
        cout << "( " <<x << " , "<< y<<")" << endl;
    }
};

class Circle : public Point
{
protected:
    float radius;
public:
    Circle();
    Circle(Point c, float r);
    Circle(float xx, float yy, float r);
    float getRadius();
    void setRadius(float r);
    float calc_radius();
    float calc_circumference();
    void display();
};

Circle::Circle()
{
    x = 0;
    y = 0;
    radius = 0;
}

Circle::Circle(Point c, float r)
{
    x = c.getX();
    y = c.getY();
    radius = r;
}

Circle::Circle(float xx, float yy, float r)
{
    x = xx;
    y = yy;
    radius = r;
}

float Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(float r)
{
    radius = r;
}

float Circle::calc_radius()
{
    return calc_circumference()/(2 * pie);
}

float Circle::calc_circumference()
{
    return 2 * pie * radius;
}

void Circle::display()
{
    cout <<"Center of Circle: "<< "( " <<x << " , "<< y<<")" << endl;
    cout <<"Radius of Circle: "<< radius << endl <<endl;

}

class Cylinder : public Point {
protected:
    float height, radius, volume, area;

public:
    Cylinder();
    Cylinder(Point c, float r, float h);
    Cylinder(float xx, float yy, float r, float h);
    float calc_area();
    float calc_volume();
    void display();

};

    Cylinder::Cylinder(){
        x = 0; y = 0; radius = 0; volume = 0;
    }
    Cylinder::Cylinder(Point c, float r, float h){
        x = c.getX(); y = c.getY(); radius = r; height = h;
    }

    Cylinder::Cylinder(float xx, float yy, float r, float h){
        x = xx; y = yy; radius = r; height = h;
    }

    float Cylinder::calc_area(){
        area =  2* pie* radius * ( radius + height);
        return area;
    }

    float Cylinder::calc_volume(){
        volume = 2* pie* radius * radius * height;
        return volume;
    }

    void Cylinder::display(){
        cout <<"Center of Cylinder: "<< "( " <<x << " , "<< y<<")" << endl;
        cout <<"Radius of Cylinder: "<< radius << endl;
        cout <<"Height of Cylinder: "<< height << endl <<endl;
    }

int main()
{
    Point p(2,3);
    Circle c(p,4);

    c.display();

    cout<<"Circumference Of c: "<<c.calc_circumference()<<endl;
    Cylinder cyl(p,4,6.4);
    cout<<"Area Of cyl: "<<cyl.calc_area()<<endl;
    cout<<"Volume Of cyl: "<<cyl.calc_volume()<<endl;
    return 0;

}
