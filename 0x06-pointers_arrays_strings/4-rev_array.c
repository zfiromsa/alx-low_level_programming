#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the string to be reverses
 * @n: is the number of elements of the array
 * Return: noting
 */

void reverse_array(int *a, int n)
{
int *rev;
int i, j;

i = 0;
rev = a;
if (n == 1)
{
rev = a;
}
else
{
while (i < n)
{
j = n - i;
rev[i] = a[j];
i++;
}
}
a = rev;
}
