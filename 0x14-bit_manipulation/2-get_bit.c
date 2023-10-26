#include "main.h"

/**
 * get_bit - that returns the value of a bit at a given index.
 *
 * @n: parm
 * @index: parm
 * Return:  -1 or 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 4))
		return (-1);
	n = n >> index;
	return (n & 1);
}

