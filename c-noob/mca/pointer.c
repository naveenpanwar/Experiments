#include<stdio.h>

void main() {
	int var;
	var = 10;
	int *ptr;
	ptr = &var;
	printf("%d\n",var);
	printf("%d\n",*ptr);
}
