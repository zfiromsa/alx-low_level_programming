#include <stdio.h>
/**
 *
 *
 */

int main(void)
{
int i, factor;

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
return (0);
}
