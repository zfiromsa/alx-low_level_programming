#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - func that fills memory wit
 * @s: first parm
 * @b: second parm
 * @n: third parm
 * return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
