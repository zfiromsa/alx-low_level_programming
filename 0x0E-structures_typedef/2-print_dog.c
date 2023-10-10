#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 *
 * d: struct parmeter
 * Return: Always nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: (%s)\n", d->name);
	printf("Age: (%f)\n", d->age);
	printf("Owner: (%s)\n", d->owner);
}

