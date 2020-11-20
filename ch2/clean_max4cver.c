#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

#define FIRST_ARG_(A, ...) A
#define FIRST_ARG(args) FIRST_ARG_ args

#define SECOND_ARG_(A, B, ...) B
#define SECOND_ARG(args) SECOND_ARG_ args

#define THIRD_ARG_(A, B, C, ...) C
#define THIRD_ARG(args) THIRD_ARG_ args

#define max2(...)															\
({																			\
	__typeof__((FIRST_ARG_(__VA_ARGS__))) _a = FIRST_ARG((__VA_ARGS__));	\
	__typeof__((SECOND_ARG_(__VA_ARGS__))) _b = SECOND_ARG((__VA_ARGS__));	\
	_a > _b ? _a : _b;														\
})

#define max3(...)															\
({																			\
	__typeof__((FIRST_ARG_(__VA_ARGS__))) _a = FIRST_ARG((__VA_ARGS__));	\
	__typeof__((SECOND_ARG_(__VA_ARGS__))) _b = SECOND_ARG((__VA_ARGS__));	\
	__typeof__((THIRD_ARG_(__VA_ARGS__))) _c = THIRD_ARG((__VA_ARGS__));	\
	max2(max2(a, b), c);													\
})

#define _MAX_OVERRIDE(_1, _2, _3, NAME, ...) NAME

#define max(...) _MAX_OVERRIDE(					\
	__VA_ARGS__,								\
	max3,										\
	max2										\
)(__VA_ARGS__)

int main(void)
{
	int a = 7, b = 33, c = 77;
	void *max_val;

	int *p1 = &b;
	int *p2 = &a;

	char const *s1 = "David";
	char const *s2 = "Nico";

	max_val = max(a, b);
	printf("max_val = %d\n", (__typeof__(a))max_val);
	max_val = max(s1, s2);
	printf("max_val = %s\n", (__typeof__(s1))max_val);
	max_val = max(a, b, c);
	printf("max_val = %d\n", (__typeof__(a))max_val);
	max_val = max(p1, p2);
	printf("max_val = 0x%x\n", (__typeof__(p1))max_val);

	return 0;
}
