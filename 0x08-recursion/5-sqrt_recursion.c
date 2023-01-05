#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: first parm
 * Return: Always n.
 */
int _sqrt(int n, int i, int j);
int _sqrt_recursion(int n)
{
int i, j;

i = 1;
j = 1;
if (n >= 3)
{
return (_sqrt(n, i, j));
}
else if (n == 1)
{
return (1);
}
return (-1);
}

int _sqrt(int n, int i, int j)
{
if ((n - i) == 0)
{
return (j);
}
else
{
return (_sqrt((n - 1), (i + 2), (j + 1)));
}
}

