#include "main.h"

void print_to_98(int n)
{
int i;
if (i <= 98)
{
for (i = n; i <= 98; i++ )
{
_putchar(i);
_putchar(',');
_putchar(' ');
}
}
else if (i >= 98)
{
for (i = n; i >= 98; i-- )
{
_putchar(i);
_putchar(',');
_putchar(' ');
}
else
{
_putchar(i);
}
}
}
