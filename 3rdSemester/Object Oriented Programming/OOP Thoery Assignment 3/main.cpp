#include<iostream>
using namespace std;
class Set
{
  private:
    int set[50];

  public:
    Set()
    {
        for (int i = 0; i < 50; i++)
            set[i] = 0;
    }

    void insert(int value)
    {
        if (value >= 0 && value < 50)
            set[value] = 1;
    }

    void remove(int value)
    {
        if (value >= 0 && value < 50)
            set[value] = 0;
    }

    Set operator+(Set &other)
    {
        Set unionSet;
        for (int i = 0; i < 50; i++)
            unionSet.set[i] = set[i] | other.set[i];
        return unionSet;
    }

    Set operator*(Set &other)
    {
        Set intersectionSet;
        for (int i = 0; i < 50; i++)
            intersectionSet.set[i] = set[i] & other.set[i];
        return intersectionSet;
    }

    Set operator~()
    {
        Set complementSet;
        for (int i = 0; i < 50; i++)
            complementSet.set[i] = !set[i];
        return complementSet;
    }

    void display()
    {
        for (int i = 0; i < 50; i++)
        {
            if (set[i] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
};

int main(){

    Set v;
    v.insert(2);
    v.insert(3);
    v.display();
    return 0;
}
