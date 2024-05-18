#include <stdio.h>
#include "calculate.h"
int main() {
	int a, b, c;
	printf("Enter a and b\n");
	scanf("%d", &a);
	scanf("%d", &b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	return 0;
}
