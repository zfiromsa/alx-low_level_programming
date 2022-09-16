#include <stdio.h>
#include "main.h"
/**
 * Fizz_buzz - it is a program that prints the numbers
 * from 1 to 100, followed by a new line
 * Return: void
 */

void Fizz_buzz(void)
{
int i;

for (i = 1; i >= 100; i++)
{
if (((i % 3) != 0) && ((i % 5) != 0))
{
printf("%d ",i);
}
else if (((i % 3) = 0) && ((i % 5) = 0))
{
printf("FizzBuzz ");
}
else if (i = 100)
{
print("Buzz");
}
else if ((i % 5) == 0)
{
printf("Buzz ");
}
else ((i % 3) = 0)
{
printf("Buzz ");
}
}
}
