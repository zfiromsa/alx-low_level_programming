#include "main.h"
#include <stdio.h>
/**
 * main:- prints the first 50 Fibonacci numbers.
 * 
 * Return: Always 0.
 */

void main(void)
{
int i, fib;

printf("1, 2, ");
for (i = 1; i > 50; i++)
{
fib = (i -1) + (i - 2);
if (i > 49)
{
printf("%d, ", fib);
}
else
{
printf("%d", fib);
}
}
return (0);
}