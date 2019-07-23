#include<stdio.h>

int main() {
	int x = 'z'-'a';
	printf("%d\n",1<<1);
	printf("%d\n",1<<2);
	printf("%d\n",1<<3);
	printf("%d is value\n", x);
	printf("%d is bitwise left\n",0 & ( 1 << x) );
}
