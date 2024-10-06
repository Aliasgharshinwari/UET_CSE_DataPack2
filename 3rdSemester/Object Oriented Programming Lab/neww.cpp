#include <iostream>
using namespace std;

class Student
{

private:
    char *name = "Ali Ahmad khan";
    int age;
    float GPA;

public:
    Student()
    {

    }

    Student(int a, float g)
    {
        age = a;
        GPA = g ;
    }

    void showStudent()
    {
        for(int i=0; i<sizeof(name); i++)
            cout <<name[i];
    }
};

int main()
{
    cout << "Enter your name, GPA and age: ";
    Student s1;
    s1.showStudent();
    return 0;
}
