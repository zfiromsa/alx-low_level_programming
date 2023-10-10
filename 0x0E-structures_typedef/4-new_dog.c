#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog.
 *
 * @d: struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    struct dog *dog_t;

	dog_t = {name, age, owner};
    return (dog_t);
}

