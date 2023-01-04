#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: first parm
 * Return: Always i
 */

int _strlen_recursion(char *s)
{
int i;

i = 0;
if (*s)
{
if (*s)
{
_strlen_recursion(s + 1);
i++;
}
else
{
return (i);
}
}
return (i);
}
