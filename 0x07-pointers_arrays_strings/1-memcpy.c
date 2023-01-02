#include "main.h"
/**
 * _memcpy - func that fills memory with a constant byte 
 * @src: first parm
 * @dest: second parm
 * @n: third parm
 * return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (memcpy(dest, src, n));
}
