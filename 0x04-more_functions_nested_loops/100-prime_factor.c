#include <stdio.h>
/**
 *
 *
 */

int main(void)
{
unsigned long factor, i;

factor =0;
for (i = 0; i < 612852475143; i++)
{
if ((612852475143 % i) == 0)
{
factor = i;
}
else
{
continue;
}
}
printf("%u", factor);
return (0);
}
