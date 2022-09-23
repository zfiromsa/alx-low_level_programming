#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first pointer patammeter
 * @stc: second pointer parammeter
 * Return: dest
 */

char *_strcat(char *dest, char *stc)
{
int i, j, len, len1, len2;
char *conc;

i = 0;
j = 0;
len1 = strlen(stc);
len2 = strlen(dest);
len = len1 + len2 - 1;
conc = dest;
while(i <= len)
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
while (j <= len2)
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
