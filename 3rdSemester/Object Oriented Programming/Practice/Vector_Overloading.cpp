#include <iostream>
using namespace std;

class Vector{
private:
    float x,y;
public:
    Vector(int xx, int yy);
    void set_vec(int xx, int yy);
    int getX();
    int getY();
    Vector operator+(Vector &V1);
    Vector operator++();
    void display();
};

Vector::Vector(int xx =0, int yy = 0){
    x = xx; y = yy;
}

void Vector::set_vec(int xx =0,int yy=0){
        x = xx; y = yy;
}

int Vector::getX(){
    return x;
}

int Vector::getY(){
    return y;
}

Vector Vector::operator+(Vector &V1){
    x  += V1.getX();
    y  += V1.getY();
    return *this;
}

Vector Vector::operator ++(){
    x++;
    y++;
    return *this;
}

void Vector::display(){
    cout<<"("<<x<<" , "<<y<<")"<<endl;
}
int main()
{
    Vector v1(1,1);
    Vector v2(2,2);

    v1.display();
    v2.display();

    Vector Vs = v1 + v2;
    Vs.display();

    ++Vs;
    Vs.display();

    return 0;
}
