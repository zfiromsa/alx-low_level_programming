#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 *
 * @n: first parm
 * Return: Always factorial or -1
 */

int factorial(int n)
{
if (n >= 0)
{
if (n == 1 || n == 0)
{
return (1);
}
else
{
int fact;

fact = factorial(n) * factorial(n - 1);
return (fact);
}
}
else
{
return (-1);
}
}
