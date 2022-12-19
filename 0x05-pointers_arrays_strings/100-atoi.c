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
for (i = 0; i <= len; i++)
{
if ((s >= 48 && s <= 58) || (s == 43) || (s == 45))
{
the_number = s;
}
}
return (the_number);
}
