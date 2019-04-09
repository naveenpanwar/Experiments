#include<stdio.h>

static inline int plus(int a, int b) {
	return a+b;
}

int minus(int a, int b) {
	return a-b;
}

int main() {
	printf("%d\n",plus(5,6));
	printf("%d\n",plus(12,minus(5,6)));
}
