using namespace std;

template <typename T, template <typename ELEM> class CONT = deque>
class Stack {
private:
	CONT<T> elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}
};
