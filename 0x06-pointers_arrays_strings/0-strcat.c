#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strcat -  
 *
 * @brief 
 * 
 * @param dest 
 * @param stc 
 * @return char* 
 */

char *_strcat(char *dest, char *stc)
{
int i, len, len1, len2, j;

i = 0;
j = 0;
len1 = strlen(stc);
len2 = strlen(dest);
len = len1 + len2 - 1;
char *conc = malloc(len);
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
while (j < len2)
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
