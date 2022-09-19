#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @*a: it is the first parameter
 * @*b: it is the second parameter 
 * Return: void
 */

void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
