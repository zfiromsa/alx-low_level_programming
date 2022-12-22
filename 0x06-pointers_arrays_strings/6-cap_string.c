#include "main.h"
#include <string.h>
#include <stdio.h>

char *cap_string(char *s)
{
int a, i;

i = 0;
a = 0;
len = strlen(s);
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', '{', '}'};
while (x[a])
{
while (i <= len)
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
