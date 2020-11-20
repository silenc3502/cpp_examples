#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

#include "stack6.hpp"

using namespace std;

int main(void) {
	try {
		Stack<int> int_stack;
		Stack<float> float_stack;

		int_stack.push(42);
		int_stack.push(7);

		float_stack.push(7.7);
		float_stack= int_stack;

		for(int i = 0; i < 3; i++) {
			cout << float_stack.top() << endl;
			float_stack.pop();
		}
	} catch(exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
	}

	Stack<int, vector<int>> v_stack;

	v_stack.push(42);
	v_stack.push(7);

	cout << v_stack.top() << endl;
	v_stack.pop();

	return 0;
}
