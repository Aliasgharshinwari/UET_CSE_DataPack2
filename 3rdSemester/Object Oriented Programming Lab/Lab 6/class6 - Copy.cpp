#include <iostream>
#include "shape.cpp"
#include "circle.cpp"
#include "square.cpp"

using namespace std;

int main()
{
    circle c1;
    square s1;
    shape *sh_ptr;
//    shape sh_obj;

//    sh_ptr = &sh_obj;
//    sh_ptr->draw();

    sh_ptr = &c1;
    sh_ptr->draw();

    sh_ptr = &s1;
    sh_ptr->draw();
    return 0;
}
