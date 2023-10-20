#include "lists.h"

void beforeMain(void) __attribute__((constructor));
/**
 * beforeMain - this function printed before main.
*/
void beforeMain(void)
{
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

