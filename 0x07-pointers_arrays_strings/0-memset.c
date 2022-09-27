#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: first parm
 * @b: second parm
 * @n: third parm
 * return: memset(s, b, n)
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
