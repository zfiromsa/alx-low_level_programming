#include "function_pointers.h"

/**
 * main - it prints the opcodes of its own main function.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1 or 2
 */
int main(int argc, char* argv[])
{
	unsigned char* opcode;
	int i, _argc;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	_argc = atoi(argv[1]);
	if (_argc < 0)
	{
		printf("Error\n");
		return (2);
	}
	opcode = (unsigned char*)main;
	i = 0;
    	while(i < _argc)
	{
		printf("%02x", opcode[i]);
		if ((i - 1) < _argc)
			printf(" ");
		i++;
	}
	printf("\n");
	return 0;
}

