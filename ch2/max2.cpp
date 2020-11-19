#include <iostream>

using namespace std;

inline int const& max(int const& a, int const& b)
{
	return a < b ? b : a;
}

template <typename T>
inline T const& max(T const& a, T const& b)
{
	return a < b ? b : a;
}

template <typename T>
inline T const& max(T const& a, T const& b, T const& c)
{
	return ::max(::max(a, b), c);
}

int main(void)
{
	cout << ::max(7, 42, 68) << endl;
	cout << ::max(7.0, 42.0) << endl;
	cout << ::max('a', 'b') << endl;
	cout << ::max(7, 42) << endl;
	cout << ::max<>(7, 42) << endl;
	cout << ::max<double>(7, 42) << endl;
	cout << ::max('a', 42.7) << endl;

	return 0;
}
