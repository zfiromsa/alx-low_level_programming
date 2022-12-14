#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
 int main(void)
{
int i;
long t1, t2, nextN;

t1 = 0;
t2 = 1;
nextN = t1 + t2;
printf("1, ");
for (i = 0; ; ++i)
{
t1 = t2;
t2 = nextN;
nextN = t1 + t2;
if (nextN > 4000000)
{
printf("%ld, ", nextN);
}
}
return (0);
}