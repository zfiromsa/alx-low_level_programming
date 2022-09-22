#include <stdio.h>
#include <ctype.h>
#include "main.h"


char *cap_string(char *str);
{
char *up;
int len, i, j;

len = strlen(str) - 1;
i = 0;
up = str;
while (i <= len)
{
if (str[i] == (',' || ';' || '' || '.' || '!' || '?' || '"' || '('|| ')'|| '{' || '}'))
{
if ( str[i + 1] == ' ')
{
up[i + 2] = toupper(str[i + 2]);
}
}
else
{
up[i + 1] = str[i + 1];
}
i++;
}
return (up);
}
