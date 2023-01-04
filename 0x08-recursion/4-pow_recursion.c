#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: first parm
 * @y: second parm
 * Return: Always y, x and -1
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
if (y >= 1)
{
return ((x * _pow_recursion(x, (y - 1))));
}
else
{
return (1);
}
}
}
