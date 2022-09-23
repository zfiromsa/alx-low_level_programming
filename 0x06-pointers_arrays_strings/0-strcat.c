#include <stdio.h>
#include "main.h"
/**
 * _strcat -
 * @dest:
 * @src:
 * @return char*
 */

char *_strcat(char *dest, char *src)
{
int len = 0, i;

while (dest[len])
len++;
for (i = 0; stc[i] != '\0'; i++)
{
dest[len] = src[i];
len = len +1; 
}
dest[len] = '\0';
return (dest);
}
