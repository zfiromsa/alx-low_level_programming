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
int i, mul;

mul = 1;
if (argc > 1)
{
for (i = 1; i <= 2; i++)
{
mul *= atoi(argv[i]);
}
printf("%s", mul);
}
else
{
printf("Error");
return (1);
}
return (0);
}
