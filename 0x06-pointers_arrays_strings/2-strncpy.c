#include "main.h"
#include <string.h>
/**
 * _strncpy -  concatenates two strings.
 * @dest: first parm.
 * @src: second parm.
 * @n: third parm.
 * Return: Always dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);

return (dest);
}
