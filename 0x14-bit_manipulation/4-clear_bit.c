#include "main.h"
/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 *
 * @n: parm
 * @index: parm
 * Return: 1 OR -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num =  ~(1 << index);

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n & num;
	return (1);
}
