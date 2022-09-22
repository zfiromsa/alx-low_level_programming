#include <strio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat -  
 *
 * 
 * @dest 
 * @stc 
 * Return: char* 
 */

char *_strncat(char *dest, char *src, int n)
{
int i, len, len1, len2, j;
char *conc;

i = 0;
j = 0;
len1 = strlen(stc);
len2 = strlen(dest);
len = len1 + len2 - 1;
conc[len];
while(i < len)
{
if (i < len1)
{
conc[i] = stc[i];
}
else if (i == len1)
{
conc[i] = ' ';
}
else
{
while (j < n)
{
conc[i] = dest[j];
j++;
}
}
i++;
}
dest =  conc;
return (dest);
}
