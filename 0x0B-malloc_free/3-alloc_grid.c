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
int arry[width][height];

int _return = (arry)malloc(sizeof(int));
if (_return == NULL)
{
return (NULL);
}
arry[0][0] = {0,0};
_return = arry;
return(_return)
}
