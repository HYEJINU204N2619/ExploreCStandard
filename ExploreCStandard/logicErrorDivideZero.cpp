#include<iostream>

int main() {
	using namespace std;
	/*Question : different between int and float, what happen if they are divided into 0*/
	int num = 0;
	int num2 = 1; 
	float fnum1 = 0.f;
	float fnum2 = 0.1f;
	double dnum1 = 0;
	double dnum2 = 1; 
	double dnum3 = dnum2 / dnum1;
	float fnum3 = fnum2 / fnum1; 
	int num3 = num2 / num;

	//cout << num2 / num << endl; 
	//cout << fnum2 / fnum1 << endl; ->print inf

	/*Answer: integer is just a standard, however float,double are supported by IEEE-754 binary32/64 format */
	return 0; 
}