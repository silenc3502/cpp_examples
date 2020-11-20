#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class Stack {
private:
	vector<T> elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}
};

template <typename T>
void Stack<T>::push(T const& elem) {
	elems.push_back(elem);
}

template <typename T>
void Stack<T>::pop() {
	if(elems.empty()) {
		throw out_of_range("Stack<>::pop(): Empty Stack!");
	}
	elems.pop_back();
}

template <typename T>
T Stack<T>::top() const {
	if(elems.empty()) {
		throw out_of_range("Stack<>::top(): Empty Stack!");
	}
	return elems.back();
}
