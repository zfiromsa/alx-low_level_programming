#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - reverses the content
 * @a: the string to be reverses
 * @n: is the number of elements of the array
 * Return: noting
 */

void reverse_array(int *a, int n)
{
int i, j, *rev;

i = 0;
rev = a;
if (n <= 1)
{
rev = a;
}
else if (i < n)
{
while (i <= n)
{
if (i < n)
{
j = n - i;
rev[i] = a[j];
}
else
{
rev[i] = a[i];
}
i++;
}
a = rev;
}
