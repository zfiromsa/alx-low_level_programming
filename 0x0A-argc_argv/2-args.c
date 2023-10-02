#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

