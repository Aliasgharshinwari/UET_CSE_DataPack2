#include <iostream>
using namespace std;

class Point
{

private:
    int xCordinate, yCordinate;

public:
    Point()
    {
        xCordinate = 0;
        yCordinate = 0;
    }

    Point(int x, int y)
    {
        xCordinate = x;
        yCordinate = y;
    }

    int getX()
    {
        return xCordinate;
    }

    int getY()
    {
        return yCordinate;
    }
    void setX(int x)
    {
        xCordinate = x;
    }

    void setY(int y)
    {
        yCordinate = y;
    }

    void display()
    {
        cout << "( " <<xCordinate << " , "<< yCordinate<<")" << endl;
    }
};

int main()
{
    Point p1;
    p1.display(); //Call display() function to show initial value of p1
    p1.setX(2); p1.setY(3);
    p1.display(); //Call display() function to show updated value of p1

    Point p2(5,2);
    p2.display(); //Call display() function to show initial value of p2

    p2.setX(6); p2.setY(3);
    p2.display(); //Call display() function to show updated value of p2

    return 0;

}
