#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
int i, cnt;

i = 0;
cnt = 1 + argc;
while (i <= cnt)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
