#include "main.h"
#include <string.h>

char *leet(char *s)
{
int i, len;

i = 0;
len = strlen(s);
while (i < len)
{
if ((s[i] == 'a') || (s[i] == 'A'))
{
s[i] = '4';
}
else if ((s[i] == 'e') || (s[i] == 'E'))
{
s[i] = '3';
}
else if ((s[i] == 'o') || (s[i] == 'O'))
{
s[i] = '0';
}
else if ((s[i] == 't') || (s[i] == 'T'))
{
s[i] = '7';
}
else if ((s[i] == 'l') , (s[i] == 'L'))
{
s[i] = '1';
}
else
{
s[i] = s[i];
}
i++;
}
return (s);
}
