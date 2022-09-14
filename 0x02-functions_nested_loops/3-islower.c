#include "main.h"
/*
 * main - the checks the argument is lowercase character or not.
 *@c: the main fuction take argument
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
