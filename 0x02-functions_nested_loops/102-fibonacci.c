#include "main.h"
#include <stdio.h>
/**
 * main:- prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
int i, t1, t2, nextTerm;

t1 = 0;
t2 = 1;
nextTerm = t1 + t2;
printf("1, 2, ");
for (i = 3; i <= 50; ++i)
{
t1 = t2;
t2 = nextTerm;
if (i < 49)
{
printf("%d, ", nextTerm);
}
else
{
printf("%d\n", nextTerm);
}
}
return (0);
}
