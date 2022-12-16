#include <stdio.h>
/**
 * Fizz_buzz - it is a program that prints the numbers
 * from 1 to 100, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (((i % 3) != 0) && ((i % 5) != 0))
{
printf("%d", i);
}
else if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("fizz_buzz");
}
else if (i == 100)
{
printf("fizz_buzz");
}
else if ((i % 5) == 0)
{
printf("fizz_buzz");
}
else ((i % 3) == 0)
{
printf("fizz_buzz");
}
}
return (0);
}
