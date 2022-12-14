#include "main.h"
#include <stdio.h>
/**
 * print_times_table:- prints the n times table, starting with 0.
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (i == n)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
}
}