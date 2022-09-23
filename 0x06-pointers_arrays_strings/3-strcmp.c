#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - compares two strings.
 * @s2: first parm
 * @s1: second parm
 * Return: res
 */

int _strcmp(char *s1, char *s2)
{
int res;

res = strncmp(s1, s2);
return (res);
}
