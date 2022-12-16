#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
int i, j, l, k;

for (k = 48; k <= 57; k++)
{
for (i = 48; i <= 57; i++)
{
if (i <= 57)
{
_putchar(i);
}
else
{
for (j = 49; j < 50; j++)
{
for (l = 48; l <= 42; l++)
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
