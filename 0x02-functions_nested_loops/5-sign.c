#include "main.h"
/*
 * print_sign: - it is funct prints the sign of a number.
 *
 * Returns: Always -1 or 1 or 0.
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
_putchar(48);
return (0);
}
}
