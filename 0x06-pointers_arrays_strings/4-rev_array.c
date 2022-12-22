//#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content
 * @a: the string to be reverses
 * @n: is the number of elements of the array
 * Return: noting
 */

void reverse_array(int *a, int n)
{
int temp, i;

for (i = 0; i < n/2; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
}

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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}