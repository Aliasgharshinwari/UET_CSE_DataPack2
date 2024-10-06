#include <iostream>
using namespace std;

class Distance
{
private:
    double feet_var,inches_var;
public:
    Distance();
    Distance(double a, double b);
    void showDistance();
    Distance operator+(Distance d);
};
Distance::Distance()
{
    feet_var = 0;
    inches_var = 0;
}
Distance::Distance(double a, double b)
{
    feet_var = a;
    inches_var = b;
}
void Distance::showDistance()
{
    cout<<"Distance in feet: "<<feet_var<<endl;
    cout<<"Distance in inches: "<<inches_var<<endl;
}
Distance Distance::operator+(Distance d)
{
    Distance temp;
    temp.feet_var = feet_var + d.feet_var;
    temp.inches_var = inches_var + d.inches_var;
    return temp;
}
int main()
{
    Distance d1(2,3);
    Distance d2(4,5);
    Distance d;

    d = d1 + d2;
    d.showDistance();
    return 0;
}
