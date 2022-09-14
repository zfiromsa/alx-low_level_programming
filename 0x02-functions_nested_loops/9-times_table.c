#include "main.h"

void times_table(void)
{
int i, j t;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
t = i * j;
if (i != 57)
{
_putchar(t);
_putchar(',');
_putchar(' ');
}
_putchar(t);
_putchar('\n');
}
}
}