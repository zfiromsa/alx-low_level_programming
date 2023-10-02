#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}

