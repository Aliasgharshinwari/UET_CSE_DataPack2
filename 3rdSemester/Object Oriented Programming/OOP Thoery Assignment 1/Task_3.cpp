#include <iostream>
using namespace std;
int Calc_year(int);
int main()
{
	int x, r;
    system("cls");

	cout << "Enter your birth year: ";
	cin >> x;
	r = Calc_year(x);
	cout << "Your age at the end of this millenium will be " << r << " years." << endl;

    system("pause");	
	return 0;
}

int Calc_year(int a)
{
	int result, mil;
	mil = 3000;
	result = mil - a;
	return result;
}
