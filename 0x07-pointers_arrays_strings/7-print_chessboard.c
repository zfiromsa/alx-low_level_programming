#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: first parm
 * return: void
 */

void print_chessboard(char (*a)[8])
{
int i, j;
char v;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
v = *(&a + i + j);
_puchar(v);
}
}
}
