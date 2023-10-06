#include "main.h"

void *malloc_checked(unsigned int b)
{
    char *p;

    p = (char *)malloc(b);
    if (p == NULL)
    {
        exit(98);
    } 
    return (p);
}