#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that frees a 2 dimensional grid
 *
 * @c: parm
 * @size: parm
 * Return: always str or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

