#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * calloc - that allocates memory for an array, using malloc.
 * 
 * @nmemb: parm
 * @size: parm
 * Return: Always NULL OR  _return 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *_return;

if (nmemb == 0)
{
return (NULL);
}
_return = (int *)malloc(sizeof(int) * size);
if (_return == NULL)
{
return (NULL);
}
return (_return);
}
