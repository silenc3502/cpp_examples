#include <deque>
#include <stdexcept>

#include "stack5decl.hpp"
#include "stack5assign.hpp"

using namespace std;

template <typename T>
void Stack<T>::push(T const& elem) {
	elems.push_back(elem);
}

template <typename T>
void Stack<T>::pop() {
	if (elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}

	elems.pop_back();
}

template <typename T>
T Stack<T>::top() const {
	if (elems.empty()) {
		throw out_of_range("Stack<>::top(): empty stack");
	}

	return elems.back();
}
