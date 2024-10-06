// Use a copy constructor to construct a parameter.
#include <iostream>
#include <cstdlib>
using namespace std;
class myclass
{
    int *p;
public:
    myclass(int i); // normal constructor
    myclass(const myclass &ob); // copy constructor
    ~myclass();
    int getval()
    {
        return *p;
    }
};
// Copy constructor.
myclass::myclass(const myclass &obj)
{
    p = new int;
    *p = *obj.p; // copy value
    cout << "Copy constructor called.\n";
}
// Normal Constructor.
myclass::myclass(int i)
{
    cout << "Allocating p\n";
    p = new int;
    *p = i;
}
myclass::~myclass()
{
    cout << "Freeing p\n";
    delete p;
}
// This function takes one object parameter.
void display(myclass ob)
{
    cout << ob.getval() << '\n';
}
int main()
{
    myclass a(10);
    display(a);
    return 0;
}
