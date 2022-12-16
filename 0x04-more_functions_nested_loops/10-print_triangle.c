#include "main.h" 
/**
 * print_triangle -prints a triangle, followed \n
 * 
 * @param size
 * Return: void
 */

void print_triangle(int size)
{
int i, j, s;

s = size - 1;
if (size > 0)
{
for (j = s; j >= 0; j--)
{
_putchar(32);
for (i = 1; i < = size; i++)
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

