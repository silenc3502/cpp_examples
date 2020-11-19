#include <deque>
#include <string>
#include <stdexcept>
#include "stack.hpp"

template <>
class Stack<string> {
private:
	deque<string> elems;

public:
	void push(string const&);
	void pop();
	string top() const;
	bool empty() const {
		return elems.empty();
	}
};

void Stack<string>::push(string const& elem) {
	elems.push_back(elem);
}

void Stack<string>::pop() {
	if(elems.empty()) {
		throw out_of_range("Stack<>::pop(): Empty Stack!");
	}
	elems.pop_back();
}

string Stack<string>::top() const {
	if(elems.empty()) {
		throw out_of_range("Stack<string>::top(): Empty Stack!");
	}
	return elems.back();
}
