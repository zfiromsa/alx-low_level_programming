#include "main.h"


void times_table(void)
{
int i, j, t;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 0; j <= 9; j++)
{
t = i * j;
_putchar(',');
_putchar('');
if (t <= 9)
_putchar(' ');
else
_putchar((t/10) + '0');
_putchar(t);
_putchar((t % 10) + '0');
}
_putchar('\n');
}
}
