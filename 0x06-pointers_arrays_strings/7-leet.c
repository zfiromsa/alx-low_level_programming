#include "main.h"
#include <string>

char *leet(char *s)
{
int i, len;

i = 0;
len = strlen(s);
char *str = malloc(len - 1);
while (i < len)
{
if (s[i] == ('a' || 'A')
{
str[i] = '4';
}
else if (s[i] == ('e' || 'E')
{
str[i] = '3';
}
else if (s[i] == ('o' || 'O')
{
str[i] = '0';
}
else if (s[i] == ('t' || 'T')
{
str[i] = '7';
}
else if (s[i] == ('l' || 'L')
{
str[i] = '1';
}
else
{
str[i] = s[i];
}
i++;
}
free(str);
return (str);
}