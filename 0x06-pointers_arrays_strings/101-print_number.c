#include "main.h"
/**
 * print_number - encodes a string into 1337
 *
 * @n: param
 * Return: Always nothing.
 */

void print_number(int n)
{
char new = n + '0';
_putchar(new);
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}