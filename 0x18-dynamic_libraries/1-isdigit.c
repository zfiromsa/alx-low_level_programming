#include "main.h"
/**
 * _isdigit - It checks for a digit 0 - 9.
 * @c: paramiter.
 *
 * Returns: Always 0 or 1.
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
