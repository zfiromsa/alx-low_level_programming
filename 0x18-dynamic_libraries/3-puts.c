#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by \n, to stdout.
 * @str: pointer to an char as parameter
 * Return: return void
 */

void _puts(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
putchar(*(s + i));
i++;
}
putchar(10);
}
