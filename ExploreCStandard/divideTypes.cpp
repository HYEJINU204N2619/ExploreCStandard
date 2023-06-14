#include<iostream>

int main() {
	/*Question: what happens when the none integer data type calculated with operators */
	using namespace std;
	char ch1 = 'Z';
	char ch2 = 'z';
	char ch3 = ch2 - ch1;
	char ch4 = ch1 / ch2;
	char ch5 = ch1 * ch2;
	cout << ch3 << " : " << ch4 << " : " << ch5 << endl;

	/*Answer: The result of operations will be understood as an ascii code accordingly */

	return 0;
} 