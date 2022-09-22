#include "main.h"
#include <string>

char *leet(char *s)
{
int i, len;

i = 0;
len = strlen(s);
while (i < len)
{
if (s[i] == ('a' || 'A')
{
s[i] = '4';
}
else if (s[i] == ('e' || 'E')
{
s[i] = '3';
}
else if (s[i] == ('o' || 'O')
{
s[i] = '0';
}
else if (s[i] == ('t' || 'T')
{
s[i] = '7';
}
else if (s[i] == ('l' || 'L')
{
s[i] = '1';
}
else
{
}
i++;
}
return (s);
}