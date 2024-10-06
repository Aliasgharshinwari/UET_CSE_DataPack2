#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class sample
{
    char *s;
public:
    sample()
    {
        s = 0;
    }
    ~sample()
    {
        if(s) delete [] s;
        cout << "Freeing s\n";
    }
    void show()
    {
        cout << s << "\n";
    }
    void set(char *str);
};

// Load a string.
void sample::set(char *str)
{
    s = new char[strlen(str)+1];
    strcpy(s, str);
}
// Return an object of type sample.
sample input()
{
    char instr[80];
    sample str;
    cout << "Enter a string: ";
    cin >> instr;
    str.set(instr);
    return str;
}
int main()
{
    sample ob;
// assign returned object to ob
    ob = input(); // This causes an error!!!!
    ob.show(); // displays garbage
    return 0;
}
