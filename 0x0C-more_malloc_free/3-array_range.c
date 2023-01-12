#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - that creates an array of integers.
 * 
 * @min:
 * @max:
 * Return: always NULL or  
 */

int *array_range(int min, int max)
{
int *p, len, i, j;

if (min > max)
{
return (NULL);
}
len = max - min;
p = malloc(sizeof(int) * len);
if (p == NULL)
{
return (NULL);
}
for (j = 0; j <= len; j++)
{
p[j] = min + j;
}
return (p);
}
