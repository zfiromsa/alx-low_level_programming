#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -returns a pointer to a newly allocated space in memory
 *
 * @str: parm
 * Return: alaways str_cpy or NULL
 */

char *_strdup(char *str)
{
char *str_cpy;
int i, size;

if (str == NULL)
{
return (NULL);
}
size = strlen(str) + 1;
str_cpy = malloc(sizeof(char) * size);
if (str_cpy == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str_cpy[i] = str[i];
}
return (str_cpy);
}
