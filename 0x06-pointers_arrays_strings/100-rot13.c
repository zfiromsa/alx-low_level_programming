#include "main.h"
/**
 * rot13 - encodes a string into 1337.
 *
 * @str: param
 * Return: Always str.
 */

char *rot13(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] >= 65 && str[i] <= 77)
{
str[i] = str[i] + 13;
}
else if(str[i] >= 78 && str[i] <= 90)
{
str[i] = str[i] - 13;
}
else if (str[i] >= 97 && str[i] <= 109)
{
str[i] = str[i] + 13;
}
else if(str[i] >= 110 && str[i] <= 122)
{
str[i] = str[i] - 13;
}
else
{
str[i] = str[i];
}
i++;
}
return (str);
}
