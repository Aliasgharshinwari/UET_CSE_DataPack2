#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    char* name; // dynamic character array
    int age;
    float gpa;
public:
    Student(): name(""),age(0),gpa(0.0) { }
    Student(char n[], int a, float g):
    name(n),age(a),gpa(g) {}
    Student(const Student &s)  // custom copy constructor - Deep
    {
        cout << "\nIn Custom Copy Constructor [Deep]" << endl;
        int len = strlen(s.name); // step 1: find length of input array
        name = new char[len+1]; // step 2: create name of length n + 1 ('/0')
        strcpy(name,s.name); // step 3: copy using strcpy
        age = s.age;
        gpa = s.gpa;
    }
    ~Student()
    {
        cout << "Terminating object." << endl;
        delete[] name;
    }
    void show()
    {
        cout<<"Student Data"<<endl;
        cout<<"Name: "<<name<<"\tAddress: "<<(void *)name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"GPA: "<<gpa<<endl<<endl;
    }
};

int main()
{
    Student s1("Ali Ahmad Khan",21,3.5);
    s1.show();
    Student s2(s1);
    s2.show();
    Student s3 = s1;
    s3.show();
    return 0;
}
