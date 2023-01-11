#include "main.h"
#include <stdlib.h>
/**
 * main - function that frees a 2 dimensional grid 
 *        previously created by your alloc_grid function.
 * 
 * @grid: parm
 * @height: parm
 */

void free_grid(int **grid, int height)
{
for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
