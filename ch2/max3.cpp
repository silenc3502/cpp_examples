#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template <typename T>
inline T const& max(T const& a, T const& b)
{
	return a < b ? b : a;
}

template <typename T>
inline T * const& max(T * const& a, T * const& b)
{
	return *a < *b ? b : a;
}

inline char const *max(char const * const& a, char const * const& b)
{
	return ::strcmp(a, b) < 0 ? b : a;
}

int main(void)
{
	int a = 7;
	int b = 33;
	cout << ::max(a, b) << endl;

	string s = "hey";
	string t = "you";
	cout << ::max(s, t) << endl;

	int *p1 = &b;
	int *p2 = &a;
	cout << ::max(p1, p2) << endl;

	char const *s1 = "David";
	char const *s2 = "Nico";
	cout << ::max(s1, s2) << endl;

	return 0;
}
