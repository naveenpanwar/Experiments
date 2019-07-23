#include<stdio.h>

void main() {
	char string[6] = "ARRAY";
	int length = ((int)sizeof(string))-1;
	for (int i=0; i<length; i++) {
		for (int j=0; j<=i; j++ ) {
			printf("%c",string[j]);
		}
		printf("\n");
	}
}
