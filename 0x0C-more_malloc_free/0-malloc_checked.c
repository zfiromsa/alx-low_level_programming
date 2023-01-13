#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - that allocates memory using malloc.
 *
 * @b: parm
 * Return: always p.
 * exit: 98.
 */

void *malloc_checked(unsigned int b)
{
int *p;

if (b <= 0)
{
exit (98);
}
p = (int *)malloc(sizeof(char) * b);
if (p == NULL)
{
exit (98);
}
return (p);
}
