#include "main.h"
/**
 * print_alphabet:- prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
