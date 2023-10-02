#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints its name, followed by a new line.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}

