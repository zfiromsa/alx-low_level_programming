#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - func that gets the length of a prefix substring. 
 * @s: first parm
 * @accept: second parm
 * return: strspn(s, accept)
 */

unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
