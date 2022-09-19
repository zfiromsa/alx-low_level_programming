#include "main.h"
/**
 * _puts - prints a string, followed by \n, to stdout.
 * @str: pointer to an char as parameter
 * Return: return void
 */

void _puts(char *str)
{
int i;

while (*(str + i) != '\n')
{
puts(*(str + i));
i++;
}
puts('\n');
}
