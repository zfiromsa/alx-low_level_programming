#include "main.h"
/*
 * print_alphabet: - print out all lower case alphabet.
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