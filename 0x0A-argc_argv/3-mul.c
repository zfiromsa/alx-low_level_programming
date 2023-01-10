#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
int i, mul, _argc;

i = 0;
mul = 1;
_argc = argc - 1;
if (_argc <= 2)
{
printf("\n");
return (1);
}
else
{
while (i <= _argc)
{
mul *= atoi(argv[i]);
i++;
}
}
printf("%d\n", mul);
return (0);
}
