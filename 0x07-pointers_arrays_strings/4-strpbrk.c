#include <string.h>
#include "main.h"
/**
 * _strpbrk - func that search a str for any of a set of bytes.
 * @s: first parm
 * @accept: second parm
 * Return: ret
 */

char *_strpbrk(char *s, char *accept)
{
char *ret;

ret = strpbrk(s, accept);
return (ret);
}
