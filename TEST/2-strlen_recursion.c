#include "main.h"
#include <stdio.h>

int count(char *s, int i);
int _strlen_recursion(char *s)
{
    int i;

    i = 0;
    i = count(s, i);
    return i;
}

int count(char *s, int i)
{
    int j;
    j = i;
    if (*s == '\0')
    {
        return j;
    }
    else
    {
        s++;
        j++;
        count(s, j);
    }
}