// Celsius to Fahrenheit Table
#include<stdio.h>

void main()
{
	float fah, cel;
	float upper, lower, step;

	upper = 150;
	lower = 0;
	step = 20;

	cel = lower;
	printf("Celsius Fahrenheit\n");

	while (cel <= upper)
	{
		fah = ((cel*9.0) + 160.0)/5.0;
		printf("  %3.0f  %6.1f\n", cel, fah);
		cel += step;
	}
}
