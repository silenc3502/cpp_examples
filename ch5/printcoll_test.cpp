#include <vector>
#include "printcoll.hpp"

using namespace std;

int main(void) {
	vector<int> v;

	v.push_back(42);
	v.push_back(13);
	v.push_back(7);

	printcoll(v);

	return 0;
}
