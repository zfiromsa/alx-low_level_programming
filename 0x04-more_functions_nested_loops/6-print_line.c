#include "main.h"
/**
 * void print_line - draws a straight line in the terminal.
 * param n
 *
 * Return void
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
