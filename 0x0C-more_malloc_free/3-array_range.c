#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - that creates an array of integers.
 * 
 * @min:
 * @max:
 * Return: always NULL or  
 */

int *array_range(int min, int max)
{
int *p, len, i, j;

if (min > max)
{
return (NULL);
}
len = max - min;
p = malloc(sizeof(int) * len);
if (p == NULL)
{
return (NULL);
}
for (j = 0; j <= len; j++)
{
p[j] = min + j;
}
return (p);
}

void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}