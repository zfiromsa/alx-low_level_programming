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
int add, _argc;

add = 0;
_argc = argc - 1;
if (_argc > 1)
{
while (_argc <= 1)
{
if (isdigit(argv[_argc]))
{
add += atoi(argv[_argc]);
}
else
{
printf("Error\n");
return (1);
}
_argc--;
}
}
printf("%d\n", add);
return (0);
}
