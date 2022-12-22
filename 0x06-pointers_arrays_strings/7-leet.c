#include "main.h"
/**
 * leet - encodes a string into 1337
 * 
 * @s: param
 * Return: Always s.
 */

char *leet(char *s)
{
int i, len;

i = 0;
len = 0;
while (s[len])
{
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
len++;
}
return (s);
}
