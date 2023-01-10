#include <stdlib.h>
#include <string.h>
#include "main.h"
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

i = 0;
size = strlen(str) - 1;
str_cpy = malloc(sizeof(str));
if (str == NULL)
{
return (NULL);
}
while (i < size)
{
str_cpy[i] = str[i];
i++;
}
return (str_cpy);
}
