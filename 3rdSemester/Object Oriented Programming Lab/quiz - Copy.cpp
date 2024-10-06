#include <iostream>
using namespace std;

class Student
{

private:
    char *name;
    int age;
    float GPA;

public:
    Student()
    {
        name = "Ali Asghar";
    }

    Student(int a, float g)
    {
        age = a;
        g = GPA;
    }

    void showStudent() const
    {
        cout << "Name ="<< name;
        cout << "GPA =" << GPA << endl;
        cout << "age =" << age << endl;
    }
};

int main()
{
    Student s1;
    s1.showStudent();
    return 0;
}
