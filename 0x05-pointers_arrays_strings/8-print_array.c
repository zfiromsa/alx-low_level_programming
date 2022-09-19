#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: first pointer to an int as parameter
 * @n: second pointer to an int as parameter
 * Return: return void
 */

void print_array(int *a, int n)
{
int inp;

for (inp = 0; inp < n; inp++)
{
if (inp != n - 1)
printf("%d,", a[inp]);
else
printf("%d,", a[inp]);
}
putchar(10);
}
