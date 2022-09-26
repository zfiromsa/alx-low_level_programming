#include <stdio.h>
#include "main.h"
/**
 * _memset - func that fills memory with a constant byte
 * 
 * @s: first parm
 * @b: second parm
 * @n: third parm
 * return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

i = 0;
while(i < n)
{
s[i] = b;
i++;
}
return (s);
}
