#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - multiplies two positive numbers.
 *
 * argv: parm
 * argc: parm
 * Return: Always 0.
 * Exit: 98.
 */

int main(int argc, char *argv[])
{
int mul, num1, num2;

if (argc < 3)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if (isdigit(num1) || isdigit(num2))
{
mul = num1 * num2;
printf("%d\n", mul);
return (0);
}
printf("Error\n");
exit (98);
}
