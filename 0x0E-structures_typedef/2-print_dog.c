#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 *
 * @d: struct parmeter
 * Return: Always nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	if (d->name == NULL || strlen(d->name) == 0)
		d->name = "(nil)";
	if (d->owner == NULL || strlen(d->owner) == 0)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

