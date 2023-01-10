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
if (_argc == 0)
{
printf("%d\n", add);
}
else
{
while (_argc <= 1)
{
int  _argv;

_argv = atoi(argv[_argc]);
if (isdigit(_argv))
{
add += _argv;
}
else
{
printf("Error\n");
return (1);
}
_argc--;
}
printf("%d\n", add);
}
return (0);
}
