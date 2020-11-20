#include <string>

using namespace std;

template <typename T>
inline T max(T a, T b) {
	return a < b ? b : a;
}

int main(void) {
	string s;

	::max("apple", "peach");
	::max("apple", "tomato");

	// Error Different Types
#if 0
	::max("apple", s);
#endif

	return 0;
}
