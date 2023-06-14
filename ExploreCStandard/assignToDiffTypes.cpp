#include<iostream>
int main() {
	using namespace std; 

	/*Q1 : can't print variable c1 if c1 is assigned to integer value 0, unless the c1 is type cast to int */
	/*Q2 : can't print the &c */

	char c = 100;
	unsigned char c1 = 0; 
	
	cout << c <<" , " << &c << ", " << sizeof(c) << endl;
	cout << c1 << " , " << &c1 << ", " << sizeof(c1) << endl;
	
	/*reason Q1 is that when c1 assigned to 0, it is same as c1 = null [ascii table] */
	/*reason Q2 ist that '<<' operator will understand &c as a Cstring and try to print the sequence 
	instead of c's address : in order to print c's address, in this case, use static_cast<void*>&c to print
	the address of it*/
	
	return 0;
}