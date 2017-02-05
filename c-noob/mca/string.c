#include<stdio.h>

void subs(char s[50], int n) {
	int sum=0;
	for (int i=0;i<50;i++){
		if (s[i] != '\n')
			sum += 1;
		else
			break;
	}
	printf("%d",sum);
	if (n < sum) {
		for (int i=0;i<n;i++) {
			printf("%c\n",s[i]);
		}
	}
	else {
		printf("The index is higher.\n");
	}
}

void main() {
	char name[50] = "Some name is a some name.\n";
	subs(name, 24);
}
