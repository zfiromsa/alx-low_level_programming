#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 *
 * @s: first parm
 */

void _print_rev_recursion(char *s)
{
int len;

len = strlen(s) - 1;
_putchar(s + len);
len--;
_puts_recursion(s + len);
}
else
{
_putchar('\n');
}
