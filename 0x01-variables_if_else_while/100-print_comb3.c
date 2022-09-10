#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch;
    char chr;
    for (chr = '0'; chr <= '9'; chr++)
    {
        putchar(ch);
        for (ch = 0; ch < 9; ch++)
        {
            putchar(ch);
            putchar(',');
        }
    }
    putchar('\n');
    return (0);
}