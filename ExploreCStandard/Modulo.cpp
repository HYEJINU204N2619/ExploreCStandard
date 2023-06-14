#include<iostream>

enum e {
	num1 = 1,
	num2 = 2,
	num3 = num1+num2,
};

int main() {
	using namespace std;

	//Question : can modulo be used with other than integer type?
	double d1 = 3455.4;
	double d2 = 34234.12; 
	
	//cout<< d1 % d2 <<endl; -> modulo can be used only with enum or integer

	e ele = num2;
	e ele2 = num3;
	//e ele3 = ele % ele2; -> integer value can't be assigned to enum type directly
	cout << ele << " " << ele2 << endl;
	cout << ele % ele2 << endl; // -> enum type can be used with modulo 
	cout << ele % 0 << endl; // -> enum can't be divided by 0


	return 0;
}