#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: it is an array
 * @size:  number of elements in the array array
 * @cmp: functon to be callaed
 * Return: i or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (cmp == NULL)
		return (1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}

