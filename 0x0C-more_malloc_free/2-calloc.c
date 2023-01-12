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
int *_return1, i;

if (size == 0)
{
return (NULL);
}
_return1 = (int *)malloc(sizeof(int) * size);
if (_return1 == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
_return1[i] = 0;
}
return (_return1);
}
