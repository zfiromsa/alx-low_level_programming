#include "main.h"

void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n++;
}
}
else if (n >= 98)
{
for (n >= 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n--;
}
}
else
{
_putchar(n);
}
_putchar("\n");
}
