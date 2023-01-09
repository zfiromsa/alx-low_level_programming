#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
if (argv[0] == "./0-whatsmyname.c")
{
printf("%s", argv[0]);
}
else
{
printf("\n");
}
return (0);
}
