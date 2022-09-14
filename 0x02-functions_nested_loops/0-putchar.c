#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar()
{
char c[]="_putchar";
int i = 0;
int ch;
while (i <= 8)
{
ch = c[i];
_putchar(ch);
i++;
}
_putchar('\n');
return (0);
}