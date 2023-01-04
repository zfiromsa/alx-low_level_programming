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
int i, j, h, sum;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum = sum + a[i][j];
}
}
for (h = (size - 1); h > 0; h--)
{
sum = sum + a[i][h];
}
}
printf("%d, %d\n", sum sum);
}
