#include "main.h"
/*
 * print_last_digit - it is func prints
 * the last digit of a number.
 * @n: the main fuction take argument
 * Returns: n.
 */

int print_last_digit(int n)
{
int lastDigit;

lastDigit = n % 10;
if (lastDigit < 0)
lastDigit *= -1;
_putchar(lastDigit + '0');
return (lastDigit);
}
