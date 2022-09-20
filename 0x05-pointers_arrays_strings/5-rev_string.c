#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to an char as parameter
 * Return: return void
 */
 void rev_string(char *s)
{
char *rev;
int len, i;

len = strlen(s);
i = 0;
rev = s;
while (i <= len)
{
rev[i] = s[len - i];
i++;
}
while (i <= len)
{
s[i] = rev[i];
i++;
}
}
