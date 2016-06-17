//This file includes testing some of the new c concepts
#include<stdio.h>
main()
{
	int a = 1;
	printf("%d,%d,%d \n",a,++a,a++);
	/*printf() function above takes the call from right to left, so
	 * first prints 'a' = 1 in 'a++' than increment it by 1 and passes
	 * it to '++a' which first increments it to 1 first so it's 3 now 
	 * and than prints the 'a' which is 3, than passes it to 'a' which
	 * prints 3 so it's "3,3,1" now and at last it reassembles them in
	 * order they are passed so outputs "1,3,3"*/
}
