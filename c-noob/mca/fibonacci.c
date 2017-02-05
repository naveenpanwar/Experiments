#include<stdio.h>

int fibonacci(int i) {
	if (i == 0)
		return 0;
	if (i == 1)
		return 1;
	return fibonacci(i-1) + fibonacci(i-2);
}

void main() {

	for (int i=0; i<20; i++) {
		printf("%d\t\n", fibonacci(i));
	}
}
