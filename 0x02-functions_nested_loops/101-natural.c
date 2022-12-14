#include "main.h"
#include <stdio.h>

void sum_and_mult(void)
{
int i, sum;

sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 = 0; || i % 5 = 0)
{
sum = sum + i;
}
}
printf("%d\n", sum);
}