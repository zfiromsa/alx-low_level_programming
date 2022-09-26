#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - func that search a str for any of a set of bytes.
 * @s: first parm
 * @accept: second parm
 * return: len
 */

char *_strpbrk(char *s, char *accept)
{
int len;

len = strpbrk(s,accept);
return (len);
}
