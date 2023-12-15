#include <string.h>
#include "main.h"
/**
 * _memcpy - func that fills memory with a constant byte
 * @src: first parm
 * @dest: second parm
 * @n: third parm
 * Return: ret
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ret;

ret = memcpy(dest, src, n);
return (ret);
}
