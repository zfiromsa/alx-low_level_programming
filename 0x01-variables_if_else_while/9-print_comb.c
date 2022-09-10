#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch;

for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch <=56)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}