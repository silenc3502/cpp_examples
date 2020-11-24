#include <iostream>

int C;

using namespace std;

class C {
private:
	int i[2];

public:
	static int f() {
		return sizeof(C);
	}
};

int f(void) {
	return sizeof(C);
}

int main(void) {
	cout << "C::f() = " << C::f() << ", "
		<< " ::f() = " << ::f() << endl;
}
