#include "main.h"
/*
 * print_alphabet_x10: - print out all lower case alphabet 10 times.
 * @void: it an argumint this fuction take.
 * Return: Always void.
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
