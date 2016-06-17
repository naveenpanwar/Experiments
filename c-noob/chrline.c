//Program Copys input to output and counts the number of lines
#include<stdio.h>
int main()
{
int c;
int nl;
nl = 0;
while ((c = getchar()) != EOF)
{	if (c == '\n')
		nl += 1;
		putchar(c);
}
printf("Lines are %d", nl);
}
