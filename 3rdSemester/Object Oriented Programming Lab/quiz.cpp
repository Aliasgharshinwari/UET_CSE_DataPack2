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
            cin >> *(name );

        cin >> age >> GPA;
    }

    Student(int a, float g)
    {
        age = a;
        GPA = g ;
    }

    void showStudent()
    {

            cout << *(name);

        cout << endl;

        cout << "GPA = " << GPA << endl;
        cout << "age = " << age << endl;
    }
};

int main()
{
    cout << "Enter your name, GPA and age: ";
    Student s1;
    s1.showStudent();
    return 0;
}
