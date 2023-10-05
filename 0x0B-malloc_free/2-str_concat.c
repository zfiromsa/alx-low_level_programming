#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
char *conc;
unsigned int _size, i, j;

i = 0;
j = 0;
_size = strlen(s1) + strlen(s2);
conc = (char *)malloc(sizeof(char) * _size);
if (conc == NULL)
{
return (NULL);
}
while (true)
{
if (s1[i] == '\0')
{
break;
}
conc[i] = s1[i];
i++;
}
while (_size >= i)
{
conc[i] = s2[j];
j++;
i++;
}
return (conc);
}
