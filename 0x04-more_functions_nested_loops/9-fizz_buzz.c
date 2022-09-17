#include "main.h"
#include <stdio.h>
/**
 * Fizz_buzz - it is a program that prints the numbers
 * from 1 to 100, followed by a new line
 * Return: void
 */

void fizz_buzz(void)
{
int i;

for (i = '1'; i >= '100'; i++)
{
if (((i % '3') != '0') && ((i % '5') != '0'))
{
_putchar(i);
}
else if (((i % '3') = '0') && ((i % '5') = '0'))
{
fizz_buzz(1);
}
else if (i = '100')
{
fizz_buzz(2);
}
else if ((i % '5') == '0')
{
fizz_buzz(4);
}
else ((i % '3') = '0')
{
fizz_buzz(3);
}
}
}
