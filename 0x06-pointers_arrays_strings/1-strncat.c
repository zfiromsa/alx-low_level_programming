#include "main.h"
#include <string.h>
/**
 * _strncat -  concatenates two strings.
 * @dest: first parm
 * @src: second parm
 * @n: third parm
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
