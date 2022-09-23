#include <string.h>
#include "main.h"
/**
 *
 * @dest:
 * @src:
 * @n:
 * Return: char* 
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, len, len1, len2;
char *conc;

i = 0;
j = 0;
len1 = strlen(stc);
len2 = strlen(dest);
conc = dest;
while(i < n)
{
if (i < len1)
{
conc[i] = stc[i];
}
else
{
while (j < (len2 - 1))
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
