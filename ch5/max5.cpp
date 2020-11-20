#include <string>

using namespace std;

template <typename T>
inline T const& max(T const& a, T const& b) {
	return a < b ? b : a;
}

int main(void) {
	string s;

	::max("apple", "peach");

	//Error Codes
#if 0
	::max("apple", "tomato");
	::max("apple", s);
#endif

	return 0;
}
