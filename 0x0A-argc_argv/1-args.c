#include <stdio.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
int i;
(void)argv;
i = 1 + argc;
printf("%d\n", i);
return (0);
}