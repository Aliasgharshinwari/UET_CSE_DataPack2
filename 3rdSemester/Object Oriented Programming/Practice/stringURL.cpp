#include<iostream>
#include<string>
using namespace std;

string stringURL(string URL){
    URL[5] = '\\';
    URL[6] = '\\';
    return URL;
}


int main()
{
    string str;
    cout<<"Enter URL"<<endl;
    cin>>str;
    cout<<"New URL ="<<stringURL(str);

    return 0;
}
