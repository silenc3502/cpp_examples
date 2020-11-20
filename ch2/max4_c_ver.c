#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

#define typename(x) _Generic((x),        /* Get the name of a type */             \
                                                                                  \
        _Bool: "_Bool",                  unsigned char: "unsigned char",          \
         char: "char",                     signed char: "signed char",            \
    short int: "short int",         unsigned short int: "unsigned short int",     \
          int: "int",                     unsigned int: "unsigned int",           \
     long int: "long int",           unsigned long int: "unsigned long int",      \
long long int: "long long int", unsigned long long int: "unsigned long long int", \
        float: "float",                         double: "double",                 \
  long double: "long double",                   char *: "pointer to char",        \
       void *: "pointer to void",                int *: "pointer to int",         \
      default: "other")

#define fmt	"ap[%d] is '%s'\n"

#define FIVE_ARG(a1, a2, a3, a4, a5, ...) a5
#define COUNT_ARG(...) FIVE_ARG(dummy, ##__VA_ARGS__, 3, 2, 1, 0)
#define P_COUNT_OF_ARG(...) printf("%-40s has %d arguments\n", #__VA_ARGS__, COUNT_ARG(__VA_ARGS__));

#define CONCAT(a, b) a ## b
#define CONCAT2(a, b) CONCAT(a, b)

#define DEBUG_VARIABLE_ARG(FORMAT, ...) CONCAT2(DEBUG_, COUNT_ARG(__VA_ARGS__))(FORMAT, ##__VA_ARGS__)

#define DEBUG_0(FORMAT)                   printf(FORMAT)
#define DEBUG_1(FORMAT, ARG1)             printf(FORMAT, ARG1)
#define DEBUG_2(FORMAT, ARG1, ARG2)       printf(FORMAT, ARG1, ARG2)
#define DEBUG_3(FORMAT, ARG1, ARG2, ARG3) printf(FORMAT, ARG1, ARG2, ARG3)

#define FIRST_ARG_(A, ...) A
#define FIRST_ARG(args) FIRST_ARG_ args

#define SECOND_ARG_(A, B, ...) B
#define SECOND_ARG(args) SECOND_ARG_ args

#define THIRD_ARG_(A, B, C, ...) C
#define THIRD_ARG(args) THIRD_ARG_ args

#define _MY_CONCAT3(a, b, c) a b c
#define _MY_CONCAT2(a, b) a b
#define _MY_CONCAT1(a) a

#define _GET_OVERRIDE(_1, _2, _3, NAME, ...) NAME

#define MY_CONCAT(...) _GET_OVERRIDE(__VA_ARGS__, \
    _MY_CONCAT3, _MY_CONCAT2)(__VA_ARGS__)

#define max2(...)															\
({																			\
	int num = COUNT_ARG(__VA_ARGS__);										\
	printf("num = %d\n", num);												\
	/* printf("first arg = %d\n", FIRST_ARG((__VA_ARGS__))); */				\
	/* printf("second arg = %d\n", SECOND_ARG((__VA_ARGS__))); */			\
	/* printf("third arg = %d\n", THIRD_ARG((__VA_ARGS__))); */				\
	__typeof__((FIRST_ARG_(__VA_ARGS__))) _a = FIRST_ARG((__VA_ARGS__));	\
	__typeof__((SECOND_ARG_(__VA_ARGS__))) _b = SECOND_ARG((__VA_ARGS__));	\
	_a > _b ? _a : _b;														\
})

#define max3(...)															\
({																			\
	int num = COUNT_ARG(__VA_ARGS__);										\
	printf("num = %d\n", num);												\
	/* printf("first arg = %d\n", FIRST_ARG((__VA_ARGS__))); */				\
	/* printf("second arg = %d\n", SECOND_ARG((__VA_ARGS__))); */			\
	/* printf("third arg = %d\n", THIRD_ARG((__VA_ARGS__))); */				\
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

	printf("%d args\n", COUNT_ARG());
	printf("%d args\n", COUNT_ARG(a));
	printf("%d args\n", COUNT_ARG(a, b));
	printf("%d args\n", COUNT_ARG(s1, s2));
	printf("%d args\n", COUNT_ARG(a, b, c));

	P_COUNT_OF_ARG(a);
	P_COUNT_OF_ARG(a, b, c);
	P_COUNT_OF_ARG(a, b);

	max_val = max(a, b);
	printf("max_val = %d\n", (__typeof__(a))max_val);
	max_val = max(s1, s2);
	printf("max_val = 0x%x\n", (__typeof__(s1))max_val);
	max_val = max(a, b, c);
	printf("max_val = %d\n", (__typeof__(a))max_val);

	DEBUG_VARIABLE_ARG("a = %d\n", a);
	DEBUG_VARIABLE_ARG("a = %d, b = %d, c = %d\n", a, b, c);
	DEBUG_VARIABLE_ARG("a = %d, b = %d\n", a, b);

	printf("3 args: %s\n", MY_CONCAT("a", "b", "c"));
    printf("2 args: %s\n", MY_CONCAT("a", "b"));
	
	return 0;
}
