#include <stdio.h>
/**
 *
 *
 */

int main(void)
{
unsigned long long int num, i;

num = 612852475143;
for (i = 1; i < num; i++)
{
if ((num % i) == 0)
{
continue;
}
}
printf("%ul", i);
return (0);
}
