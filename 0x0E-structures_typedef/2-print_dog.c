#include <stdio.h>
#include "dog.h"

/**
 * main - a function that prints a struct dog.
 *
 * d: struct parmeter
 * Return: Always nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
	}
	else if (d->name == NULL)
	{
		printf("name:(nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("owner:(nil)\n");
	}
	else if (d->name == NULL)
	{
		printf("name:(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

