#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest:
 * @src:
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int len, i;

len = 0;
while (dest [len])
len++;
for (i = 0; src [i] != '\0'; i++)
{
dest [len] = src [i];
len = len + 1; 
}
dest [len] = '\0';
return (dest);
}
