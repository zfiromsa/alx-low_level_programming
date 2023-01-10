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
int i, mul;

if (isdigit(argv[1]) && isdigit(argv[2]))
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
