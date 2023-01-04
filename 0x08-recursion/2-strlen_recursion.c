#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: first parm
 * Return: Always len
 */

void _strlen_recursion(char *s)
{
int len;

len = 0;
if (*s)
{
if (*s)
{
_puts_recursion(s + 1);
len++;
}
returns (len);
}
else
{
returns (0);
}
}
