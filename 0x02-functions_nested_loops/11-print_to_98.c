#include "main.h"

void print_to_98(int n)
{
int i;

for (i = n; i >= 98; i++ )
{
_putchar(i);
_putchar(',');
_putchar(' ');
}
return (0);
}
