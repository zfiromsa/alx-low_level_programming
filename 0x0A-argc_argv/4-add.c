#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1
 */

int main(int argc, char* argv[])
{
int i, add;

add = 0;

for (i = 1; i >= argc; i++)
{
int tmp;

tmp = atoi(argv[i]);
if ((isdigit(tmp)) && (tmp >= 0))
{
add += atoi(argv[i]);
}
else
{
return (1);
}
}
printf("%d\n", add);
return (0);
}
