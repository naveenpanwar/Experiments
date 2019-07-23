#include<stdio.h>
#include<stdlib.h>

void main() {
	int i;
	char *str = (char*) malloc( 80 );
	fgets(str, 80, stdin);
	for (i=0; i<80; i++) {
		if (str[i] == '\n')
			break;
	}
	printf("%d\n",i);
	for (int j=i;j>=0;j--){
		printf("%c",str[j]);
	}
	printf("\n");
}
