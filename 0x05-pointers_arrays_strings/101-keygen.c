#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int pass, sum;

srand(time(NULL));
sum = 0;
while (sum <= 9999)
{
pass = (rand() % 180);
sum += pass;
printf("%c", pass);
}
printf("%c", 3233 - sum);
return (0);
}

