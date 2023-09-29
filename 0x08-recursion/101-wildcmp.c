#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 or 0
 *
 * @s1: second parm
 * @s2: first parm
 * @i: it parm
 * Return: Always 0 or 1.
 */
int _comp(char *s1, char *s2, int i);
int wildcmp(char *s1, char *s2)
{
int i;

i = 0;
return (_comp(s1, s2, i));
}
/**
 * _comp -it comp to string
 *
 * @s1: first
 * @s2: second parm
 * @i: third parm
 * Return: Always 0.
 */

int _comp(char *s1, char *s2, int i)
{
if ((*s1 + i) != '\0' || (*s2 + i) != '\0')
{
if ((*s1 + i) != (*s2 + i))
{
return (1);
}
else if ((*s1 + i) == (*s2 + i))
{
return (0);
}
i++;
_comp((s1 + i), (s2 + i), i);
}
return (0);
}
