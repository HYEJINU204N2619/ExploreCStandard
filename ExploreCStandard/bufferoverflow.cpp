#include<iostream>

int main() {
	using namespace std;
	/*Question: what happen if the assigned value is bigger than the data type's maximum number*/
	int num = 10;
	char ch = sizeof(ch)*256;
	unsigned s = ULONG_MAX * ULONG_MAX + 2;
	cout << (++ch)++ << endl;
	cout << s << endl;

	/*Answer: it starts back to the minimum number that data type can express*/
	return 0;
}

