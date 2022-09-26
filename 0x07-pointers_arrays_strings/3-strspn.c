#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - func that gets the length of a prefix substring. 
 * @s: first parm
 * @accept: second parm
 * return: len
 */

unsigned int _strspn(char *s, char *accept)
{
int len;

len = strspn(s,accept);
return (len);
}
