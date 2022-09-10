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
    int chrr;
    for (chr = 48; chr <= 57; chr++)
    {
        for (ch = 48; ch < 57; ch++)
        {
            for (chrr = 48; chrr < 57; chrr++)
            {
                if (ch != chr && chrr != chr )
                {
                putchar(chr);
                putchar(ch);
                putchar(chrr);
                putchar(',');
                putchar(32);
                }
            }
    }
    putchar('\n');
    return (0);
}