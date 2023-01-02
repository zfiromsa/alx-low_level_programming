#include <stdio.h>
#include "main.h"
/**
 * print_diagsums: prints the sum of the two diagonals
 * a: first parm
 * size: second parm
 *
 * Return: Always nothing.
 */

void print_diagsums(int *a, int size)
{
int i, j, h, sum1, sum2;

sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
sum1 += a[i][j];
}
for (h = (size - 1); h > 0; h--)
{
sum2 += a[i][h];
}
}
puts(sum1);
puts(sum2);
}
