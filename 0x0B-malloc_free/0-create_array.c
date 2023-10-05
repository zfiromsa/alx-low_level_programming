#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creates an arry of chars, and initializes with specific char
 *
 * @size: size of array to be created
 * @c: initializes it with this parm
 * Return: ret
 */
char *create_array(unsigned int size, char c)
{
	char *ret;

	if (size <= 0)
	{
		return (NULL);
	}
	ret = malloc(sizeof(c) * size);
	return (ret);
}

