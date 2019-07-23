#include<stdio.h>

void main() {
	FILE *fp;
	char ch;
	fp = fopen("file.txt","w+");

	fprintf(fp, "Some Data.\n");
	fputs("Some Data.\n", fp);

	fclose(fp);
}

