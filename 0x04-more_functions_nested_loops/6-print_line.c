#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: paramiter.
 *
 * Return: Alwas void.
 */
 
void print_line(int n)
{
int b;

if (n > 0)
{
for (b = 1; b <= n; b++)
{
_putchar('_');
}
}
_putchar('\n');
}
