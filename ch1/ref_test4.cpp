#include <iostream>

using namespace std;

void call_by_value(int **p){
	cout << **p << endl;
}

// r-value 를 int 로 받는다.
void call_by_ref(int&& ref){
	cout << ref << endl;
}

// r-value 를 int * 로 받는다.
void call_by_ref(int *&& ref){
	cout << ref << endl;
	cout << *ref << endl;
}

int main(void){
	int num = 3;
	int *p = &num;
	int **pp = &p;

	call_by_value(pp);
	call_by_ref(forward<int>(**pp));
	call_by_ref(forward<int *>(*pp));
	call_by_ref(3.7);

	return 0;
}
