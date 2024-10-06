#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class employee{

private:
    char *name, *department;
    double salary, period_of_service;
public:
    employee(){
        strcpy(name,"Ali Asghar");
        strcpy(department,"DCSE");
        salary = 300000;
        period_of_service = 12;
    }

    employee(string n, string d,double sal, double pos){
        strcpy(name,n);
        strcpy(department,d);
        salary = sal;
        period_of_service = pos;
    }

    void show(){

    }

};
int main(){

    return 0;
}
