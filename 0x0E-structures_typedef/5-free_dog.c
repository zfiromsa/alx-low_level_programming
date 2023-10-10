#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - it free alocated pointer
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	free(d->name);
	(void)d->age;
	free(d->owner);
	free(d);
}

