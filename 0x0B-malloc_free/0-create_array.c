#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that frees a 2 dimensional grid 
 *        previously created by your alloc_grid function.
 * 
 * @grid: parm
 * @height: parm
 */

char *create_array(unsigned int size, char c)
{
char *ar;
if (size == 0)
{
return (NULL);
}
ar = malloc(size * sizeof(c));
return (ar);
}
