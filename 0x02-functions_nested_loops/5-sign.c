#include "main.h"
/*
 * print_sign: - it prints the sign of a number.
 * @n: the main fuction take argument
 * Returns: +,_,0.
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
{
return (0);
}
}
