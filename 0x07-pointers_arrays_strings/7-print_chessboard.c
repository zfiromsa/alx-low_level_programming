#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: first parm
 * return: void
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_puchar(a[i][j]);
}
}
}
