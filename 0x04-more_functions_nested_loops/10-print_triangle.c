#include "main.h"
#include <stdio.h> 

void print_triangle(int size)
{
int i, j, s;

s = size -1;
if (size > 0)
{
for (j = s; j >= 0; j--)
{
_putchar(' ');
for (i = 1; i < = size; i++)
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

