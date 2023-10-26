#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: parm
 * Return: 0 OR num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int i;

	i = 0;
	num = 0;
	power = 1;
	if (!b)
		return (0);
	i = 0;
	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num += power;
		power += power;
		i--;
	}
	return (num);
}

