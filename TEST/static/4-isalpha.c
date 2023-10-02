#include "main.h"
/** 
 * int _isalpha:- checks for alphabetic character.
 *
 * Return: Always 1 or 0.
 */

int _isalpha(int c)
{
if (c >= 99 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
