//Program counts the number of tabs spaces and newlines
#include<stdio.h>
int main()
{
int c, nl ,tabs, spaces;
nl = 0;
tabs = 0;
spaces = 0;

while ((c = getchar()) != EOF)
{	if (c == ' ')
		++spaces;
	if (c == '\n')
		++nl;
	if (c == '\t')
		++tabs;
}

printf("spaces = %d, Tabs = %d, Newlines = %d",spaces, tabs, nl);
}
