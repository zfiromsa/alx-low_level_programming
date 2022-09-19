#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts - prints a string, followed by \n, to stdout.
 * @*str: pointer to an char as parameter
 *
 * Return: void
 */

void _puts(char *str)
{
int len;
int i;

len = strlen(str);
for (i = 0; i <= len; i++)
{
if (i > len)
{
st[i] = str[i];
}
else
{
st[i] = str[i];
}
}
puts(st);
}
