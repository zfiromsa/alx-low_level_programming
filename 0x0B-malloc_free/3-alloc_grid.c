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
_return = malloc(height * sizeof(int *));
for (l = 0; l < width; l++)
{
_return[l] = malloc(height * sizeof(int));
}
for (i = 0; i < height; i++)
{
if (_return == NULL && _return[l] == NULL)
{
free(_return);
free(_return[i]);
return (NULL);
}
}
for (i = 0, j = 0; i < width && j < height; i++, j++)
{
_return[i][j] = 0;
}
return (_return);
}
