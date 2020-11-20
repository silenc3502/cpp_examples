#include <deque>
#include <stdexcept>

#include "stack6decl.hpp"
#include "stack6assign.hpp"

using namespace std;

template <typename T, typename CONT>
void Stack<T, CONT>::push(T const& elem) {
	elems.push_back(elem);
}

template <typename T, typename CONT>
void Stack<T, CONT>::pop() {
	if(elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}

	elems.pop_back();
}

template <typename T, typename CONT>
T Stack<T, CONT>::top() const {
	if(elems.empty()) {
		throw out_of_range("Stack<>::top(): empty stack");
	}

	return elems.back();
}
