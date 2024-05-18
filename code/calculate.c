#include "calculate.h"
int add(int a, int b) {
	printf("Sum is %d\n", a+b);
	return 0;
}

int sub(int a, int b) {
	printf("Diff is %d\n", a-b);
	return 0;
}

int mul(int a, int b) {
	printf("Product is %d\n", a*b);
	return 0;
}

int div(int a, int b) {
	printf("Quotient is %f\n", (float)a/(float)b);
	return 0;
}
