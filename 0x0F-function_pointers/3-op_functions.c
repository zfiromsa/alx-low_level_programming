#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b.
 *
 * @a: num one
 * @b: num second
 * Return: (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the different of a and b.
 *
 * @a: num one
 * @b: num second
 * Return: (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 *
 * @a: num one
 * @b: num second
 * Return: (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the sum of a and b.
 *
 * @a: num one
 * @b: num second
 * Return: (a + b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the sum of a and b.
 *
 * @a: num one
 * @b: num second
 * Return: (a % b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

