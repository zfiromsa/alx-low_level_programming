#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: first parm
 * Return: Always i
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
s++;
return ((1 + _strlen_recursion(s)));
}
}

