#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: first pointer to an int as parameter
 * @b: second pointer to an int as parameter 
 * Return: return void
 */

void print_array(int *a, int n)
{
int inp = 0;

while (inp < n)
{
if (inp != n - 1)
printf("%d,",a[inp]);
else
printf("%d,",a[inp]);
inp++;
}
putchar(10);
}