#include "main.h"
/**
 * is_prime_number - prints a string, followed by a new line.
 *
 * @n: first parm
 */

int  isPrime(int n, int i = 2);
int is_prime_number(int n)
{
return (isPrime(n, 2));
}

/**
 * isPrime - 
 *
 * @n: first parm.
 * @i: second parm.
 * return - Always 0 or 1. 
 */
int  isPrime(int n, int i = 2)
{
if (n <= 2)
{
return (0)
}
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
else
{
return isPrime(n, i + 1);
}
}
