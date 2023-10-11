#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: it is an array
 * @size:  number of elements in the array array
 * @cmp: functon to be callaed
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (0 != cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}

