#include <iostream>

#include "add_value.hpp"

using namespace std;

void call_addValue(void) {
	addValue<int, 5>(42);
}

template <typename IT, typename OP>
void transform(IT beg, IT end, IT to, OP op) {
	while(beg != end) {
		*to++ = op(*beg++);
	}
}

int main(void) {
	call_addValue();

	int m[] = { 1, 2, 3, 4, 5, 6 };

	transform(m, m + 6, m, 
#ifndef CORE_ISSUE_115_SOLVED
			(int(*)(int const&))
#endif
			addValue<int, 5>);

	for(int i = 0; i < 6; i++) {
		cout << "m = " << m[i] << endl;
	}
}
