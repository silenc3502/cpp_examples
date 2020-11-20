#include <deque>
#include <stdexcept>

#include "stack7decl.hpp"

using namespace std;

template <typename T, template <typename> class CONT>
void Stack<T, CONT>::push(T const& elem) {
	elems.push_back(elem);
}

template <typename T, template <typename> class CONT>
void Stack<T, CONT>::pop() {
	if(elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}

	elems.pop_back();
}

template <typename T, template <typename> class CONT>
T Stack<T, CONT>::top() const {
	if(elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}

	return elems.back();
}
