#include <iostream>

using namespace std;

void ref_test(int&& ref_val)
{
	cout << ref_val << endl;
}

int main(void)
{
	int num = 3;
	//ref_test(num);	// Error
	ref_test(3);
	ref_test(5 + 2);

	//int&& ref = num;	// Error
	int&& test = 33;

	return 0;
}
