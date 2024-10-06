#include <iostream>
using namespace std;

class Heater
{

private:
    int temperature;

public:
    Heater()
    {
        temperature = 15;
    }

    void warmer()
    {
        temperature += 5;
    }

    void cooler()
    {
        temperature -= 5;
    }

    int access_Temperature()
    {
        return temperature;
    }
};

int main()
{
    Heater h1,h2;

    system("cls");
    cout<<"Temperature = "<< h1.access_Temperature()<<endl;
  
    h1.warmer();
    cout<<"Temperature after warmer= "<< h1.access_Temperature()<<endl;  

    h1.cooler();
    cout<<"Temperature after cooler= "<< h1.access_Temperature()<<endl;

    cout<<"Temperature = "<< h1.access_Temperature()<<endl;
  
    h2.warmer();
    cout<<"Temperature after warmer= "<< h2.access_Temperature()<<endl;  

    h2.cooler();
    cout<<"Temperature after cooler= "<< h2.access_Temperature()<<endl;

    h2.cooler();
    cout<<"Temperature after again cooler= "<< h2.access_Temperature()<<endl;

    system("pause");
    return 0;
}
