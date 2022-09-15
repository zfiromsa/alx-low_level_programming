#include "main.h"

void print_diagonal(int n)
{
int i, j, in, s;

in = n;
s = 32;
if (in < 0)
{
for (i = 1; i <= in; ++i)
{
for (j = 1; j <= i; ++j)
{
_putchar(s);
}
}
_putchar("\n");
}
else
{
_putchar("\n");
}
}