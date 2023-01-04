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
if (*s)
{
char k;
k = (s + len);
_putchar(k);
len--;
_puts_recursion(s + len);
}
else
{
_putchar('\n');
}
}
