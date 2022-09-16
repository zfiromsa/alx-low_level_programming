#include "main.h"
/**
* print_triangangle-  it print triangangle
* Return: void
*/ 

void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar("\n");
}
}
