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
int **_return, i, j;

if (width && height)
{
return (NULL);
}
_return = malloc(width*height*sizeof(int));
if (_return == NULL)
{
return (NULL);
}
// _return[width][height];
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
_return[width][height] = 0;
}
}
return(_return);
}
