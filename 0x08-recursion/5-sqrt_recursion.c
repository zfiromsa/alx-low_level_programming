#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: first parm
 * Return: Always n.
 */
int _sqrt_re(int n, int i);
int _sqrt_recursion(int n)
{
    int i;

    i = 1;
    if (n < 1)
    {
        return (-1);
    }
    else
    {
        return _sqrt_re(n, i);
    }
}

/**
 * _sqrt_re - returns the natural square root of a number.
 *
 * @n: first parm
 * @i: second parm
 * Return: Always n.
 */
int _sqrt_re(int n, int i)
{
    int j;

    j = i * i;
    if (n == j)
    {
        return (i);
    }
    else if (n < j)
    {
        return (-1);
    }
    else
    {
        return (_sqrt_re(n, (i+1)));
    }
}
