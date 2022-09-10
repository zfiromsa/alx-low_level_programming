#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;

for (ch = 97 ; ch <= 122 ; ch++)
{
if (ch != 101 && ch != 113)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
