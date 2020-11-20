#include <iostream>

struct X{

};

void func(X&& t){
    std::cout << "RValue" << std::endl;
}

void func(X& t){
    std::cout << "LValue" << std::endl;
}

template<typename T>
void foo(T&& t){
	func(t);
}

int main(void){
    X x;
    foo(x);
    foo(X());

    return 0;
}

