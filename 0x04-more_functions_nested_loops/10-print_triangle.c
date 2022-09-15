include <stdio.h>
#include "main.h"
/**
* print_diagonal- print adiagonal
* Return: void
*/ 

void print_triangle(int size)
{
int i, j, k, s, b;

k = size;
b = 35;
s = 32;
if (k > 0)
{
for (i = 1; i <= k; ++i) 
{
for (j = k; j <= 1; --j)
{
_putchar(' ');
}
_putchar(b);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}