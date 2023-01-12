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
 * Return: always s1, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, len, lens1;
char *tmp;

len = strlen(s1) + n;
lens1 = strlen(s1);
tmp = (char *)malloc(sizeof(s1) * len);
if (s1 == NULL || s2 ==NULL)
{
return (NULL);
}
for (i = 0; i < lens1; i++)
{
tmp[i] = s1[i];
}
for (i = lens1, j = 0; i < len; i++, j++)
{
tmp[i] = s2[j];
}
return (tmp);
}
