#include <string.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: first parm
 * @b: second parm
 * @n: third parm
 * Return: ret
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ret;

ret = memset(s, b, n);
return (ret);
}
