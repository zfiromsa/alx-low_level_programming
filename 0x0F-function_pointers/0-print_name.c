#include "function_pointers.h"

/**
 * print_name -  function that prints a name.
 *
 * @name: name of to be printed.
 * @f: function called in this function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

