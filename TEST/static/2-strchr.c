#include <string.h>
#include "main.h"
/**
 * _strchr - func that locates a character in a string.
 * @s: first parm
 * @c: second parm
 * Return: ret
 */

char *_strchr(char *s, char c)
{
char *ret;

ret = strchr(s, c);
return (ret);
}
