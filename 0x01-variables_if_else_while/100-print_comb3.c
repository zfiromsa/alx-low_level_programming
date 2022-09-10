#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch =('0');
    char chr;
    for (chr = '0'; chr <= '9'; ch++)
    {
        putchar(ch);
        putchar(chr);
    }
    putchar('\n');
    return (0);
}