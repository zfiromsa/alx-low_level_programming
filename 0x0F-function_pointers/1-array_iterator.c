#include "function_pointers.h"

/**
 * array_inerator - executes a func given as a param on each elem of an array.
 *
 * @nsize: is the size of the array
 * @array: is an array
 * @action: function called in this function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

