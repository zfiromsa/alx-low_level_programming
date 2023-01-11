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
int *_return;

int _return = (int *)malloc(width * height * sizeof(int));
if (_return == NULL)
{
return (NULL);
}
_return[0][0] = {0,0};
return(_return)
}
