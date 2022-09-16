#include <stdio.h>
#include "main.h"

void print_line(int n)
{
int bl;

if (n > 0)
{
for (bl = 1; bl <= n; bl++)
{
_putchar('_');
}
else
{
_putchar('\n');
}
}
}
