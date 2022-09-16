#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @param c
 * @return int
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
