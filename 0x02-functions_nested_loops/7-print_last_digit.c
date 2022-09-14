#include "main.h"
/*
 * print_last_digit - it prints the last digit of a number.
 * @n: the main fuction take argument
 * Returns: n.
 * 
 */

int print_last_digit(int n)
{
int lastDigit;

lastDigit = n % 10;
if ( n < 0)
{
lastDigit = lastDigit * (-1);
_putchar(lastDigit);
return (lastDigit);
}
else
_putchar(lastDigit);
return (lastDigit);
}
