#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the string to be reverses
 * @n: is the number of elements of the array
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}