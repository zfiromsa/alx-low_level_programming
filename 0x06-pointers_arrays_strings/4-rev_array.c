#include "main.h"
/**
 * reverse_array - reverses the content
 * @a: the string to be reverses
 * @n: is the number of elements of the array
 *
 * Return: noting
 */

void reverse_array(int *a, int n)
{
int temp, i, k;

k = n / 2;
for (i = 0; i < k; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
}
