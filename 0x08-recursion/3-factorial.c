#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 *
 * @n: first parm
 * Return: Always fact
 */

int factorial (int n)
{
if (n >= 0)
{
if (n == 1 || n == 0)
{
factorial (n) = 1;
}
else
{
factorial (n) = factorial (n) * factorial (n - 1);
}
return (factorial (n));
}
else if (n < 0)
{
return (-1);
}
}


