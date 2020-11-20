#include <iostream>
#include <deque>
#include <cstdlib>
#include "stack3.hpp"

int main(void) {
	try {
		Stack<int> intStack;
		Stack<double, std::deque<double>> doubleStack;

		intStack.push(7);
		std::cout << intStack.top() << std::endl;
		intStack.pop();

		doubleStack.push(33.77);
		std::cout << doubleStack.top() << std::endl;

		doubleStack.pop();
		doubleStack.pop();
	} catch(std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		return EXIT_FAILURE;
	}
	return 0;
}
