#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string revirs.
 * @s: pointer to an char as parameter
 * Return: return void
 */

void print_rev(char *s)
{
int len = strlen(s);

while (len--)
{
putchar(*(s + len));
}
putchar(10);
}
