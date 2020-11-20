#include <typeinfo>
#include <iostream>

using namespace std;

template <typename T>
void ref(T const& x) {
	cout << "x in ref(T const&): " << typeid(x).name() << endl;
}

template <typename T>
void nonref(T x) {
	cout << "x in nonref(T): " << typeid(x).name() << endl;
}

int main(void) {
	ref("hello");
	nonref("hello");

	return 0;
}
