#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int i, j, l, k;

for (k = 1; k <= 10; k++)
{
for (i = 48; i <= 58; i++)
{
if (i <= 57)
{
_putchar(i);
}
else
{
for (j = '1'; j < '2'; j++)
{
for (l = '0'; l <= '4'; l++)
{
_putchar(j);
_putchar(l);
}
}
}
}
_putchar('\n');
}
}
