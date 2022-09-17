#include <stdio.h>
#include "main.h"
/**
 * void print_line - draws a straight line in the terminal.
 * @param n
 * Return void
 */
 
void print_line(int n)
{
int bl;

if (n > 0)
{
for (bl = 1; bl <= n; bl++)
{
_putchar('_');
}
}
}
