#include <iostream>
#include <string>
#include <cstdlib>
#include "stack.hpp"

int main(void) {
	try {
		Stack<int> intStack;
		Stack<string> stringStack;

		intStack.push(7);
		cout << intStack.top() << endl;
		intStack.pop();

		stringStack.push("hello");
		cout << stringStack.top() << endl;

		stringStack.pop();
		stringStack.pop();
	} catch(exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		return EXIT_FAILURE;
	}
	return 0;
}
