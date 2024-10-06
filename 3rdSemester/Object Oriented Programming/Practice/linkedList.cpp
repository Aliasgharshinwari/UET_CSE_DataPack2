#include <string.h>
#include <iostream>

using namespace std;

class element
{
public:
    element *next;
    void print() const = 0;
};

class point
{
public:
    float x,y;
    point(float xx =0,float yy =0):x(xx),y(yy) {}
};

class line : public element
{
private:
    point A,B;

public:
    line(point &aa, point &bb, element *ptr);
    void print() const;

};

class circle: public element
{
    class circle: public element
    {
    public:
    public:
        circle (point &center, float circle (point &center, float radius, element *ptr); radius, element *ptr);
        void print() const;
        void print() const;
    private:
    private:
        point C;
        point C;
        float r;
        float r;
    };

    int main()
    {

    }
