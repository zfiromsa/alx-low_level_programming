#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 *
 * @n: first parm
 * Return: Always factorial or -1
 */

int factorial (int n)
{
if (n >= 0)
{
if (n == 1 || n == 0)
{
return (1);
}
else
{
return (factorial (n) * factorial (n - 1));
}
return (factorial (n));
}
else
{
return (-1);
}
}
