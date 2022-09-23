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
int *rev = malloc(n);
int i, j;

i = 0;
if (n <= 1)
{
rev = a;
}
else
{
while (i <= n)
{
j = n - i;
rev[i] = a[j];
i++;
}
}
a = rev;
}
