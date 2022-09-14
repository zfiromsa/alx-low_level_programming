#include "main.h"

void print_to_98(int n)
{
int i;

i = n;
if (i < '98')
{
while (i <= '98')
{
_putchar(i);
_putchar(',');
_putchar(' ');
i++;
}
}
else if (i > '98')
{
while (i >= '98')
{
_putchar(i);
_putchar(',');
_putchar(' ');
i--;
}
}
else
{
_putchar(i);
}
_putchar('\n');
}
