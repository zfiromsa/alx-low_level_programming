#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat -  that concatenates two strings.
 *
 * @s1: parm
 * @s2: parm
 * @n: parm
 * Return: always tmp, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, len, lens1;
char *tmp;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len = strlen(s1) + n;
lens1 = strlen(s1);
tmp = (char *)malloc(sizeof(char) * len);
for (i = 0; i < lens1; i++)
{
tmp[i] = s1[i];
}
for (i = lens1, j = 0; i < len; i++, j++)
{
tmp[i] = s2[j];
}
tmp[i] = '/0';
return (tmp);
}
