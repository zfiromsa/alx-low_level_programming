#include "main.h"

/**
 * factorial -  func that return the factorial of a given number.
 *
 * @n: first parm
 *
 * Return: fact.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		int  fact;

		if (n == 1)
		{
			return (1);
		}
		else
		{
			fact = factorial(n - 1) * n;
			return (fact);
		}
	}
}

