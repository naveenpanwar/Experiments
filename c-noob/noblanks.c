//Program to erase more blanks to single
#include<stdio.h>
int main()
{
int c;
int blanks = 0;
while ((c=getchar()) != EOF)
{	if (c == ' ')
		++blank;
	putchar(c);
