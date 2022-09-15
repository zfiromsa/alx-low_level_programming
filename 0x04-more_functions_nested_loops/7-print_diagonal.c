#include "main.h"
/**
* print_diagonal- tests function that prints if integer is positive or negative
* Return: void
*/ 

void print_diagonal(int n)
{
int i, j, k, s, b;

k = n;
b = 92;
s = 32;
if (n > 0)
{
for (i = 1; i <= k; ++i) 
{
for (j = 1; j <= i; ++j)
{
_putchar(s);
}
_putchar(b);
_putchar("\n");
}
}
else
{
_putchar("\n");
}
}
