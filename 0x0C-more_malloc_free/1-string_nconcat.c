#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
int i, j, len, lens1, lens2;
char *tmp;
len = strlen(s1) + n;
lens1 = strlen(s1);
lens2 = strlen(s2);
tmp = s1;
s1 = (char *)malloc(sizeof(s1) * len);
if (s1 == NULL)
{
return (NULL);
}
for (i = 0; i < lens1; i++)
{
s1[i] = tmp[i];
}
for (i = 0, j = lens1; j < len; i++, j++)
{
s1[j] = s2[i];
}
return (s1);
}
