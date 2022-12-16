#include "main.h"
/**
 * print_number: prints an integer.
 * @n: paramiter.
 *
 * Return: Always  void.
 */

void print_number(int n)
{
char m;

if (isdigit(n))
{
m = n - '0';
_putchar(m);
}
}
