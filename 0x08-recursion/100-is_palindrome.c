#include "main.h"
/**
 * is_palindrome - func returns 1 if a str is a palindrome and 0 if not.
 *
 * @s: first parm
 * Return: Always 0.
 */
int _strlen_recursion(char *s);
int _is_palindrome_helper(char *s, int start, int end);
int is_palindrome(char *s)
{
int leng;
leng = _strlen_recursion(s);
return (_is_palindrome_helper(s, 0, (leng - 1)));
}
/**
 * _is_palindrome_helper - func returns 1 if a str is a palindrom and 0 if not.
 *
 * @s: first parm
 * @end: end track the length of string
 * @first: first track the length of string
 * Return: Always i
 */

int _is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
return (_is_palindrome_helper(s, (start + 1), (end - 1)));
}
}
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
