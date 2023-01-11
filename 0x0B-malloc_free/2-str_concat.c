#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - that concatenates two strings.
 *
 * @s1: parm
 * @s2: parm
 * Return: alaways str_cpy or NULL
 */

char *str_concat(char *s1, char *s2)
{
char *str_cnc;
int i, j, k, size, s1_len, s2_len;

if ((s1 == NULL) && (s2 == NULL))
{
return (NULL);
}
size = strlen(s1) + strlen(s2) + 1;
s1_len = strlen(s1);
s2_len = strlen(s2);
str_cnc = malloc(sizeof(char) * size);
if (str_cnc == NULL)
{
return (NULL);
}
for (i = 0; i < s1_len; i++)
{
str_cnc[i] = s1[i];
}
for (j = s1_len, k = 0; j < size && k < s2_len; j++, k++)
{
str_cnc[j] = s2[k];
}
return (str_cnc);
}
