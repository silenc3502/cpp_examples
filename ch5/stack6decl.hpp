using namespace std;

template <typename T, typename CONT = deque<T>>
class Stack {
private:
	CONT elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}

	template <typename T2, typename CONT2>
	Stack<T, CONT>& operator=(Stack<T2, CONT2> const&);
};
