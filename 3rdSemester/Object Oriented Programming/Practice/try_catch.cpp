#include <string.h>
#include <iostream>

using namespace std;

void catchHandle(int i){
    try{
        if(!i)
            throw i;
    }

    catch(int i){
        cout<<"Caught Exception "<<i<<"\n";
    }
}

int main()
{
    catchHandle(0);
    catchHandle(3);
    catchHandle(2);
    return 0;
}
