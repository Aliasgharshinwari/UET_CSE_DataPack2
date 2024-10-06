// Restricting function throw types.
#include <iostream>
using namespace std;
// This function can only throw ints, chars,
//and doubles.
void Xhandler(int test) throw(int, char,
                              double)
{
    if(test==0) throw test; // throw int
    if(test==1) throw 'a'; // throw char
    if(test==2) throw 123.23; // throw double
}
int main()
{
    cout << "start\n";
    try
    {
        Xhandler(0); // also, try passing 1 and 2 to
        Xhandler()
    }
    catch(int i)
    {
        cout << "Caught int\n";
    }
    catch(char c)
    {
        cout << "Caught char\n";
    }
    catch(double d)
    {
        cout << "Caught double\n";
    }
    cout << "end";
    return 0;
}
