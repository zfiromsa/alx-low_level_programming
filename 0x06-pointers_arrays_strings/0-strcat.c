//#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest: first
 * @src: second
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
strcat (dest, src);
return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}