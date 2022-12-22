#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - It changes all lowercase char to uppercase.
 * @s: first argu.
 *
 * Return: Always str.
 */

char *string_toupper(char *s)
{
int len, i;

i = 0;
len = strlen(s) - 1;
while (i <= len)
{
if (s[i] >= 97 && s[i] <= 122)
{
char tmp = s[i];
s[i] = tmp - 32;
}
i++;
}
return (s);
}
