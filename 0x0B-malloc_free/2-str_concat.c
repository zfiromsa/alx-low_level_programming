#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - that concatenates two strings.
 *
 * @str: parm
 * Return: alaways str_cpy or NULL
 */

char *str_concat(char *s1, char *s2)
{
char *str_cnc;
int i, j, size, s1_len;

size = strlen(s1) + strlen(s2);
s1_len = strlen(s1);
str_cnc = malloc(sizeof(char) * size);
if (str_cnc == NULL)
{
return (NULL);
}
for (i = 0; i < s1_len; i++)
{
str_cnc[i] = s1[i];
}
for (j = s1_len; j < size; j++)
{
str_cnc[s1_len] = str_cnc[size];
}
return (str_cpy);
}