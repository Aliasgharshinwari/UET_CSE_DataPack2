#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class employee
{
private:
    char* name;
    char* department;
    double salary,pos;
public:
    employee();
    employee(char a[], char b[], double c, double d);
    employee (const employee &d);
    void show();
    void input();
    ~employee();

};
void employee::show()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Period Of Service: "<<pos<<endl<<endl;
}

employee::employee()
{
    name = "Ali Asghar";
    department ="IT";
    salary = 100000;
    pos = 4;
};

employee::employee(char a[], char b[], double c, double d)
{
    name = a;
    department = b;
    salary = c;
    pos = d;
};

employee::employee (const employee &d)
{
    int len=strlen(d.name);
    name= new char[len+1];
    int len2=strlen(d.department);
    department= new char[len2+1];
    strcpy(name,d.name);
    strcpy(department,d.department);
    salary=d.salary;
    pos=d.pos;
}

void employee::input()
{
    char n[100],d[100];
    cout<<"Enter Name: ";
    cin.getline(n,100);
    int l1=strlen(n);
    name = new char[l1];
    strcpy(name,n);
    cout<<"Enter Department: ";
    cin.getline(d,100);
    int l2=strlen(d);
    department= new char[l2];
    strcpy(department,d);
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter Period of service: ";
    cin>>pos;
}

employee::~employee()
{
    delete[] name;
    delete[] department;
}

int main()
{
    employee e1;
    employee e2("Ali Asghar","CSE",30000,4);
    employee e4;

    e1.show();
    e2.show();

    employee e3(e2);
    e3.show();

    e3.input();
    e3.show();
    return 0;
}
