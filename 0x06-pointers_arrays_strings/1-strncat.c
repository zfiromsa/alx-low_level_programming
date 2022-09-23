#include <string>
#include "main.h"
/**
 * _strncat -  concatenates two strings.
 * @dest: first parm
 * @src: second parm
 * @n:
 * Return: dest 
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest ,src, n);
return (dest);
}
