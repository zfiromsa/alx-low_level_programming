#include <stdio.h>
/**
 *
 *
 */

int main(void)
{
long long factor, i, G;

G = 612852475143ULL;
factor =0;
for (i = 0; i < G; i++)
{
if ((G % i) == 0)
{
factor = i;
}
else
{
continue;
}
}
printf("%d", factor);
return (0);
}
