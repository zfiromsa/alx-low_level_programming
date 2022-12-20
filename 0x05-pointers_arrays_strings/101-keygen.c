#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main ()
{
time_t t;

srand((unsigned) time(&t));
printf("%d\n", rand() % 50);
return(0);
}