#include <stdio.h>
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
int i, len, len1, len2, j, l1;

i = 0;
j = 0;
len1 = strlen(stc);
len2 = strlen(dest);
char  *conc = malloc(n);
l1 = n + len1;
while(i < n)
{
if (i <= len1)
{
conc[i] = stc[i];
}
else if (i == len1)
{
conc[i] = ' ';
}
else
{
while (j < len2)
{
conc[i] = dest[l1];
j++;
}
}
i++;
}
dest =  conc;
free(conc);
return (dest);
}
