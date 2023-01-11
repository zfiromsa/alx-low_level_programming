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
int **_return;
int arr[width][height], i, j;

if (width && height)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
arr[width][height] = 0;
}
}
_return = (arr *)malloc(sizeof(int)); 
if (_return == NULL)
{
return (NULL);
}
arr = _return;
return(_return);
}
