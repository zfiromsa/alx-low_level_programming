#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int ch;
    int chr;
    for (chr = 48; chr <= 57; chr++)
    {
        for (ch = 48; ch < 57; ch++)
        {
            if (chr != ch)
            {
                putchar(chr);
                putchar(ch);
                putchar(',');
                putchar(32);
            }
    }
    putchar('\n');
    return (0);
}