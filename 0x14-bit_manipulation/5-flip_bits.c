#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: parm.
 * @m: parm.
 * Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, flip;

	count = 0;
	flip = (n ^ m);
	while (flip > 0)
	{
	count++;
	flip &= (flip - 1);
	}
	return count;
}

