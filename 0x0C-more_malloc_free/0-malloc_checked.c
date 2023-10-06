#include "main.h"

/**
 * malloc_checked -  0x0C-more_malloc_free.
 *
 * @b: size of ponter.
 * Return: p.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = (char *)malloc(b);
	if (p == NULL || (isdigit(b)))
		exit(98);
	return (p);
}

