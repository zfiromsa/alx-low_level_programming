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
if ((s[i] >= '48' && s[i] <= '58') || (s[i] == '43') || (s[i] == '45'))
{
the_number[i] = s[i] + 0;
}
}
return (the_number);
}
