#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: first parm
 * Return: Always n.
 */

int _sqrt_recursion(int n)
{
int i;

i = 1;
n = n - i;
if (n == i)
{
return (n);
}
else
{
i = i + 2;
_sqrt_recursion(n);
}
}
