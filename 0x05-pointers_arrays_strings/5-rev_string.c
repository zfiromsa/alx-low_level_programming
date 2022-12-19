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
char *rev;
int len, i;

rev = s;
len = strlen(rev) - 1;
for (i = 0; i <= len; i++)
{
while (i <= len)
{
rev[i] = s[len];
len--;
}
}
s = rev;
}
