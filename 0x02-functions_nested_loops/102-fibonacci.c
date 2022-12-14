#include "main.h"
#include <stdio.h>
/**
 * main:- prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
long t1, t2, nextN;

t1 = 0;
t2 = 1;
nextN = t1 + t2;
printf("1, 2, ");
for (i = 0; i <= 46; ++i)
{
t1 = t2;
t2 = nextN;
nextN = t1 + t2;
if (i < 46)
{
printf("%ld, ", nextN);
}
else
{
printf("%ld", nextN);
}
}
return (0);
}

