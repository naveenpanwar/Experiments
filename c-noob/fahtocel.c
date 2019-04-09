//Program to print a fahrenheit to celcious table
#include<stdio.h>
int main()
{
float fah,cel;
float lower,upper,step;
lower = 0;
upper = 300;
step = 20;

fah = lower;
printf("||The Fahrenheit to Celsius Table||\n");
printf("Fahrenheit Celsius\n");
while (fah <= upper)
{
cel = (5.0/9.0) * (fah - 32.0);
printf("   %3.0f    %6.1f\n", fah,cel);
fah += step;
}
}
