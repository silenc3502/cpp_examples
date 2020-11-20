#include <iostream>

using namespace std;

template <typename T>
void printcoll(T const& coll) {
	typename T::const_iterator pos;
	typename T::const_iterator end(coll.end());

	for(pos = coll.begin(); pos != end; ++pos) {
		cout << *pos << ' ';
	}

	cout << endl;
}
