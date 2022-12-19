#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to an char as parameter
 * Return: return void
 */
void rev_string(char *s)
{
char tmp;
int len, len1, i;

while (s[len1] != '\0')
{
len1++;
}
len = len1 - 1;
for (i = 0; i < len; i++)
{
tmp = s[i];
s[i] = s[len];
s[len] = tmp;
}
}
