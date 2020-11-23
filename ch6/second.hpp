#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
void print_typeof(T const&);

template <typename T>
void print_typeof(T const& x) {
	cout << typeid(x).name() << endl;
}
