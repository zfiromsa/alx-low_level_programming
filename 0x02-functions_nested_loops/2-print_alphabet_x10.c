#include "main.h"
/**
 * print_alphabet_x10:- prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i;
int ch;
for (i = 0; i <= 9; i++)
{
for (ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
