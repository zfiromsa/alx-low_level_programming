#include "main.h"

/**
 * array_range - that creates an array of integers.
 *
 * @min: parm
 * @max: parm
 * Return: always NULL or p
 */
int *array_range(int min, int max)
{
	int *p, len, j;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		p[j] = min + j;
	p[len] = '\0';
	return (p);
}

