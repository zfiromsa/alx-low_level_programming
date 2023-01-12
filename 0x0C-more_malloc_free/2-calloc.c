#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * calloc - that allocates memory for an array, using malloc.
 * 
 * @nmemb: parm
 * @size: parm
 * Return: Always NULL OR  _return1 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *_return1;

if (nmemb == 0)
{
return (NULL);
}
_return1 = (int *)malloc(sizeof(int) * size);
if (_return1 == NULL)
{
return (NULL);
}
return (_return1);
}
