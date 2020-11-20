#include <iostream>
#include <typeinfo>

#include "first.hpp"

using namespace std;

template <typename T>
void print_typeof(T const& x) {
	cout << typeid(x).name() << endl;
}
