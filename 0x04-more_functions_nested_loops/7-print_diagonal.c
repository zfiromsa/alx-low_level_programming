#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @param n
 * Return: void
 */

void print_diagonal(int n)
{
int i, j, b,s;

b = 92;
s = 32;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(s);
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
