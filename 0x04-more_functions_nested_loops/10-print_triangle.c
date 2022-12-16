#include "main.h" 
/**
 * print_triangle -prints a triangle, followed \n
 * 
 * @param size
 * Return: void
 */

void print_triangle(int size)
{
int i, j, s, m;

m = size - 1;
if (size > 0)
{
for (j = 1; j <= size; j++)
{
for (i = m; i >= 1; i--)
{
_putchar(32);
}
for (s = 1; s <= size; i++)
{
_putchar(35);
}
_putchar("\n");
}
}
else
{
_putchar("\n");
}
}

