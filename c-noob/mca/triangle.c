#include<stdio.h>

void main() {
	int a,b,c;
	printf("Enter side a's length.\n");
	scanf("%d",&a);
	printf("Enter side b's length.\n");
	scanf("%d",&b);
	printf("Enter side c's length.\n");
	scanf("%d",&c);

	if ( (a < (b+c))&&(b < (a+c))&&(c < (a+b)) ) {
		printf("Triangle can be formed.\n");
	}
	else {
		printf("Triangle can not be formed.\n");
	}
}
