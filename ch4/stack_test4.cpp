#include <iostream>
#include <string>
#include <cstdlib>
#include "stack4.hpp"

using namespace std;

int main(void) {
	try {
		Stack<int, 20> int20_stack;
		Stack<int, 40> int40_stack;
		Stack<string, 40> string_stack;

		int20_stack.push(7);
		cout << int20_stack.top() << endl;
		int20_stack.pop();

		string_stack.push("hello");
		cout << string_stack.top() << endl;
		string_stack.pop();
		string_stack.pop();
	} catch(exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		return EXIT_FAILURE;
	}
	return 0;
}
