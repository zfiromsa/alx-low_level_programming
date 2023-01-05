#include "main.h"
/**
 * is_palindrome - func returns 1 if a str is a palindrome and 0 if not.
 *
 * @s: first parm
 * Return: Always 0.
 */
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
int i, j;

j = 0;
i = _strlen_recursion(s);
if (j != i)
{
if ((*s + j) != (*s + i))
{
return (0);
}
else
{
j++;
i--;
}
}
if ((*s + j) != (*s + i))
{
return (0);
}
return (1);
}

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
