#include<stdio.h>

void main() {
	int a;
	int factors = 0;
	scanf("%d",&a);
	for( int i=1;i <= a; i++ ) {
		if ( (a%i) == 0) {
			factors ++;
		}
	}
	if ( factors == 2 )
		printf("%d is Prime.\n",a);
	else
		printf("%d is NOT Prime.\n",a);
}
