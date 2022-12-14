#include "main.h"
#include <stdio.h>
/**
 * print_to_98:- prints all natural numbers from n to 98, followed by a new line.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;

if (n >= 0 && n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i < 98)
{
printf("%d", i);
printf(", ");
}
else
{
printf("98\n");
}
}
}
}
