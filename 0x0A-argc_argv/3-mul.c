#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1
 */

int main(int argc, char* argv[])
{
int mul;

if (argc > 1)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%s\n", mul);
}
else
{
printf("Error");
return (1);
}
return (0);
}
