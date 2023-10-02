#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	(void)argv;
	argc--;
	printf("%d", argc);
	return (0);
}

