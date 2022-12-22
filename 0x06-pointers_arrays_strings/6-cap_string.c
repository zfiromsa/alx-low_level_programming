#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: first par.
 *
 * Return: Always s.
 */

char *cap_string(char *s)
{
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', '{', '}'};
int len = 13;
int a = 0, i;

while (s[a])
{
i = 0;
while (i < len)
{
if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
{
s[a] = s[a] - 32;
}
i++;
}
a++;
}
return (s);
}
