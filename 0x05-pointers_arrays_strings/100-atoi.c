#include "main.h"
#include <string.h>
/**
 * _atoi - that convert a string to an integer.
 *
 * @s: the string to be converted.
 *  Return: Always the_number.
 */

int _atoi(char *s)
{
int i, len, the_number;

len = strlen(s);
for (i = len; i <= 0; i--)
{
if ((i >= 48 && i <= 58) || (i == 43) || (i == 45))
{
the_number = 'i' + 0;
}
}
return (the_number);
}
