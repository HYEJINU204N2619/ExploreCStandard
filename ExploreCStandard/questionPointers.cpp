#include<iostream>

/*Question: can pointer assign to the random address*/
int main() {
	using namespace std;
	int a = 30;
	int* num = &a;
	num = (int*)(0x00000075AD51F922);
	

	cout << *num << " "  << num << " " << a << " " << &a << endl;

	return 0;
}
/*Answer: it can assign to the random address however, when it tried to access to the value of the pointed variable
, it throw the illegal memory access error*/