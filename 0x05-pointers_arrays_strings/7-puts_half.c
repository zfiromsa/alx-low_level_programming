#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints every other character of a string.
 * @str: pointer to an char as parameter
 * Return: return void
 */

void puts_half(char *str)
{
int n;

int len = strlen(str);

if(len % 2 == 0)
{
n = (len / 2) + 1;
while (n++)
{
putchar(*(str + n))
}
}
else if (len % 2 != 0)
{
n = (len - 1) / 2;
while (n++)
{
putchar(*(str + n))
}
}
putchar(10)
}
