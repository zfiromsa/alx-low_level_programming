//#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @dest: first
 * @src: second
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int len, i;

//len = 0;
//while (dest [len] )
//len++;
len = strlen(dest);
for (i = 0; src [i] != '\0'; i++)
{
dest [len] = src [i];
len = len + 1; 
}
dest [len] = '\0';
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
