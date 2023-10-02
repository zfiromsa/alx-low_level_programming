#include <stdio.h>
#include <stdlib.h>


/**
 * main - a program that adds positive numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1
 */
int main(int argc, char* argv[])
{
    int sum, i, no;

    sum = 0;
    i = 1;
    argc--;
    while (argc >= i)
    {
        no = atoi(argv[i]);
        if (no == 0)
        {
            printf("Error\n");
            return (1);
        }
        sum = sum + atoi(argv[i]);
        i++;
    }
    printf("%d", sum);
    return (0); 
}