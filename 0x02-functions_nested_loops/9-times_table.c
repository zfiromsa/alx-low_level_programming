#include "main.h"

void times_table(void)
{
int i,j;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
if (i != 57)
{
_putchar(j*i);
_putchar(',');
_putchar(' ');
}
_putchar(j*i);
_putchar('\n');
}
}
}