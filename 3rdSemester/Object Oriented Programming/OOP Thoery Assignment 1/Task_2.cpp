#include <iostream>
using namespace std;

int Calc_year(int, int);

int main(){
	int x, y, z;
    system("cls");
	cout << "Enter your birth year: ";
	cin >> x;
	cout << "enter current year: ";
	cin >> y;
	z = Calc_year(x, y);
	cout << "Your age at the end of this year will be " << z << " years." << endl;
    system("pause");	
	return 0;
}

int Calc_year(int a, int b){
	int res;
	res = b - a;
	return res;
}
