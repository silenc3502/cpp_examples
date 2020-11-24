#include <iostream>

using namespace std;

template <typename T>
class Safe {
};

template <int N>
class Danger {
public:
	typedef char Block[N];
};

template <typename T, int N>
class Tricky {
public:
	Tricky() {
		cout << "Tricky()" << endl;
	}
	virtual ~Tricky() {
		cout << "virtual ~Tricky()" << endl;
	}
	void no_body_here(Safe<T> = 3);
	void inclass() {
		Danger<N> no_boom_yet;
	}
	T operator->();
	struct Nested {
		Danger<N> pfew;
	};
	union {
		int align;
		Safe<T> anonymous;
	};
};

int main(void) {
	Tricky<int, 0> ok;

	return 0;
}
