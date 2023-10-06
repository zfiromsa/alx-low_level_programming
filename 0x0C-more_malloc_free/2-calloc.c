#include "main.h"

/**
 * _calloc - that allocates memory for an array, using malloc.
 *
 * @nmemb: parm
 * @size: parm
 * Return: Always NULL OR  _return1
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *_return1, i;

	if (size == 0 || nmemb == 0)
		return (NULL);	
	_return1 = malloc(nmemb * size);
	if (_return1 == NULL)
		return (NULL);
	for (i = 0; (unsigned)i < size; i++)
		_return1[i] = 0;
	return (_return1);
}

