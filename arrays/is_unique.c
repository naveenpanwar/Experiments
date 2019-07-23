#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool isUnique(char *string) {
	bool charset[128];
	int len = (int) strlen(string)/sizeof(char);
	printf("%d is string length\n",len);
	for(int i=0;i<len;i++) {
		int val = (int)*(string+i);
		bool c = charset[val];
		if( c ) {
			return 0;
		}
		charset[val] = 1;
	}
	return 1;
}
int main() {
	char *string = "naveen";
	if( isUnique( string ) ) {
		printf("%s has unique chars",string);
	}
	else {
		printf("%s does not have unique chars",string);
	}
}
