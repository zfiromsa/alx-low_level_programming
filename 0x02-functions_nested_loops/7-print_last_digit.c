#include "main.h"

int print_last_digit(int n)
{
int lastDigit;

lastDigit = n % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
else
{
lastDigit = lastDigit;
}
_putchar(lastDigit);
_putchar(lastDigit);
return (0);
}