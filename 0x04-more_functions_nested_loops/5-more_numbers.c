#include "main.h"

void more_numbers(void)
{
int i, j, l, k;

for (k = 0; k < 10; k++)
{
for (i = 48; i <= 58; i++)
{
if(i <= 57)
{
_putchar(i);
}
else
{
for(j = '1'; j < '2'; j++)
{
for(l = '0'; l <= '4'; l++)
{
_putchar(j);
_putchar(l);
}
}
}
}
_putchar('\n');
}
}
