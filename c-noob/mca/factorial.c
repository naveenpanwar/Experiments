#include<stdio.h>

int factorial(int i) {
	if (i <= 1)
		return 1;
	return i * factorial(i-1);
}

void main() {
	int i=4;
	printf("%d\t\n", factorial(i));
}
