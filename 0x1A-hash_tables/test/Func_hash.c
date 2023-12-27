#include "hash.h"

unsigned int Fhash(char *str)
{
    unsigned int i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}

