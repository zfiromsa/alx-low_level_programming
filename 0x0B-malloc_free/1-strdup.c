#include <stdlib.h>
#include "main.h"
/**
 * _strdup -returns a pointer to a newly allocated space in memory
 *
 * @str: parm
 * Return alaways str_cpy or NULL 
 */

char *_strdup(char *str)
{
char *str_cpy;

str_cpy = malloc(sizeof(str));
if (str == NULL)
{
return (NULL);
}
str_cpy = str;
return (str_cpy);
}
