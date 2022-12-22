#include "main.h"
/**
 * leet - encodes a string into 1337
 * 
 * @s: param
 * Return: Always s.
 */

char *leet(char *str)
{
char _char[5] = {'A', 'E', 'O', 'T', 'L'};
char _No[5] = {'4', '3', '0', '7', 'l'};
int i = 0, j, k = 5;

while (str[i])
{
j = 0;
while (j < k)
{
if (str[i] == _char[j] || str[i] - 32 == _char[j])
{
str[i] = _No[j];
}
j++;
}
i++;
}
return (str);
}
