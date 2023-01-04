#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: first parm
 * Return: Always len
 */

int _strlen_recursion(char *s)
{
int len;

len = 0;
if (*s)
{
_strlen_recursion(s + 1);
len++;
}
else
{
}
returns (len);
}
