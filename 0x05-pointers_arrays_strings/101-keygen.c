#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: Always 0.
 */

int main(void)
{
int pass, sum;

srand(time(NULL));
sum = 0;
while (sum <= 2675)
{
pass = (rand() % 127);
sum += pass;
printf("%c", pass);
}
printf("%c", pass);
return (0);
}