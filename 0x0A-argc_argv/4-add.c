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

i = 1;
add = 0;
while (i <= argc)
{
if (isdigit(argv[i]))
{
add += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", add);
return (0);
}
