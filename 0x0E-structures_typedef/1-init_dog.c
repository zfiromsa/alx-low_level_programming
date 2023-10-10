#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog.
 *
 * @d: struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}

