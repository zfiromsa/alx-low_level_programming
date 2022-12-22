#include "main.h"
/**
 * reverse_array - rev the content of an ary of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int temp, i, k;

k = (n / 2);
for(i = 0; i < k; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
}
