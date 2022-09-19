#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string revirs.
 * @s: pointer to an char as parameter
 * Return: return void
 */

void print_rev(char *s)
{
int len;

int i = 0;
while (*(s + i) != '\0')
{
len = i + 1;
i++;
}
if (len >= 1 )
{
while (len--)
{
putchar(*(s + len));
}
putchar(10);
}
else
{
putchar(10)
}
}
