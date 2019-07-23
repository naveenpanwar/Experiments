#include<stdio.h>

void main() {
	int a,b,i;
	printf("Enter a number.\n");
	scanf("%d",&a);
	printf("Enter a limit.\n");
	scanf("%d",&b);
	printf("The counting is.\n");
	
	for( i = 1; i <= b; i=i+1 ) {
		printf("%d X %d = %d\n",a,i,i*a);
	}
}
