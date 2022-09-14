#include "main.h"
/*
 * _islower: - return 1 if parammeter c is equal alphabit c.
 * Return: 1 0r 0.
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
