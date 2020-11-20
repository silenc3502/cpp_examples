using namespace std;

template <typename T>
class Stack {
private:
	deque<T> elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}

	template <typename T2>
	Stack<T>& operator=(Stack<T2> const&);
};
