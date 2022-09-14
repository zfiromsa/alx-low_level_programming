#include "main.h"

void times_table(void)
{
int i,j;
for (i=0; i <= 9; i++)
{
for (j=0; j <= 9; j++)
{
if (i!=9)
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