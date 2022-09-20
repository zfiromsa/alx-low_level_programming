#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints every other character of a string.
 * @str: pointer to an char as parameter
 * Return: return void
 */

void puts_half(char *str)
{
int n;

int len = strlen(str);
if (len == 0)
{
putchar(10);
}
else if (len % 2 != 0)
{
n = ((len - 1) / 2) + 1;
while (n <= len)
{
putchar(*(str + n));
n++;
}
putchar(10);
}
else
{
n = (len / 2) + 1;
while (n <= len)
{
putchar(*(str + n));
n++;
}
putchar(10);
}
}
