#include <stdio.h> 
#include "main.h"
/**
* print_triangangle-  it print triangangle
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
for (i = 1; i <= k; i++)
{
for (j = i; j < k; j++)
{
_putchar(s);
}
for (k = 1; k <= i; k++)
{
_putchar(b);
}
_putchar("\n");
}
}
else
{
_putchar("\n");
}
}
