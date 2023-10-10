#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that initialize a variable of type struct dog.
 *
 * @d: struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dogt;

	dogt = malloc(sizeof(struct dog_t));
	if (dogt == NULL)
		return (NULL);
	dogt->name = name;
	dogt->age = age;
	dogt->owner = owner;
	return (dogt);
}

