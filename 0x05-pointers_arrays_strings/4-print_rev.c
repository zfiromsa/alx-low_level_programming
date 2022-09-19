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
char st[63];
for (i = 63; i <= 0; i--)
{
if (i > 63)
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