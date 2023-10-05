#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: dimension of arry X
 * @height: dimension of arry Y
 * Return: always int**
 */

int **alloc_grid(int width, int height)
{
int **_return, i, j, l;

if (width <= 0 || height <= 0)
{
return (NULL);
}
_return = malloc(width * sizeof(int *));
for (l = 0; l < height; l++)
{
_return[l] = malloc(width * sizeof(int));
}
if (_return == NULL)
{
for (i = 0; i < height; i++)
{
free(_return[i]);
}
free(_return);
return (NULL);
}
for (i = 0, j = 0; i < width && j < height; i++, j++)
{
_return[i][j] = 0;
}
return (_return);
}
