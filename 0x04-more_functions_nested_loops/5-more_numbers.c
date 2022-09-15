#include "main.h"

void more_numbers(void)
{
int i, j;

for (int k = 0; int k < 10; k++)
{
for (i = 48; i <= 58; i++)
{
if(i != 58)
{
_putchar(i);
}
else
{
for(j = 49; j < 49; j++)
{
_putchar(j);
for(j = 48; j <=52; j++)
{
_putchar(j);
}
}
}
}
_putchar('\n');
}
}
