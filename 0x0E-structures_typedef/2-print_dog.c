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
		d->name = "nil";
		d->owner = "nil";
		d->age = 0.000000;
		exit(0);
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

