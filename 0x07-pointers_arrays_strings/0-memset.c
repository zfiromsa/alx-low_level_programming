#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: first parm
 * @b: second parm
 * @n: third parm
 * return: S
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
