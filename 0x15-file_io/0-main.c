#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %d)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %d)\n", n);
    return (0);
}
