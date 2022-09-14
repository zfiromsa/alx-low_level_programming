#include "main.h"
/*
 * print_sign - the checks for sign of a number.
 * @n: the main fuction take argument
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 * Returns -1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
return (0);
}
