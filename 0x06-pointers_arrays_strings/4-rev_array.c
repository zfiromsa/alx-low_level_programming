#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the string to be reverses
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
char *rev;
int i, j;

i = 0;
rev = a;
while (i < n)
{
j = n - i;
rev[i] = a[j];
i++;
}
a = rev;
}