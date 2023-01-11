#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - function that splits a string into words
 *
 * @str: input parm
 * Return: _return
 */

char **strtow(char *str)
{
char **ch;
int i, len;

len = strlen(str)
if ((str == NULL) || (len == 0))
{
return (NULL);
}
ch = malloc(str);
if (ch == NULL)
{
return (NULL);
}
}
