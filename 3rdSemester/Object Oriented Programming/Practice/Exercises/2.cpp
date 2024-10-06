#include <iostream>
using namespace std;

int main ()
{
    int bYear, cYear;
    cout<<"Enter your birth year"<<endl;
    cin>>bYear;

    cout<<"Enter current year"<<endl;
    cin>>cYear;

    int r = cYear - bYear;
    cout<<"Your age at the end of this year will be "
    <<r<<endl;

    cout<<"Your age at the end of this millenium will be "
    <<3000 - bYear<<endl;

    return 0;
}
