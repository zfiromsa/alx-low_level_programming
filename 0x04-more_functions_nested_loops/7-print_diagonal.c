#include "main.h"
/**
* print_diagonal- tests function that prints if integer is positive or negative
* Return: void
*/ 

void print_diagonal(int n)
{
int i, j, k;

k = n;
if (n > 0)
{
for (i = 1; i <= k; ++i) 
{
for (j = 1; j <= i; ++j)
{
_putchar(32);
}
_putchar(92);
_putchar("\n");
}
}
else
{
_putchar("\n");
}
}
