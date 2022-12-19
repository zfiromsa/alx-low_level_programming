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
int len, i, j;

len = strlen(s);
i = 0;
rev = (char*)malloc(sizeof(s));
while (i <= len)
{
j = len - i;
rev[i] = s[j];
i++;
}
s = rev;
}
