#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - that allocates memory using malloc.
 *
 * @b: parm
 */
 
void *malloc_checked(unsigned int b)
{
int *p;

if (b == 0)
{
return (NULL);
}
p = (int *)malloc(sizeof(char) * b)
if (p == NULL)
{
return (NULL);
}
return (p);
}
