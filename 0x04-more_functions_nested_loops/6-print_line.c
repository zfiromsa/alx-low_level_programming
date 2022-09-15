#include "main.h"

void print_line(int n)
{
int j, i, in;

j = 1;
i = 95;
in = n;
if (in >= 0)
{
if (in != 0)
{
while (j >= in)
{
_putchar(i);
j++;
}
}
else
{
}
}
_putchar("\n");
}
