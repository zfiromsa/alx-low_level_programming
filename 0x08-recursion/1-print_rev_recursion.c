#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: first parm
 */

void _print_rev_recursion(char *s)
{
int len;

len = strlen(s) - 1;
if (len <= 1)
{
_putchar(s + len);
len--;
_puts_recursion(s + len);
}
else
{
_putchar('\n');
}
}
