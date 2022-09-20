#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcpy - prints elements of an array of integers
 * @dest: first pointer to an int as parameter
 * @src: second pointer to an int as parameter
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
int i, len;

len = strlen(src) + 1;
i = 0;
while (i <= len)
{
if (i < len)
{
dest[i] = src[i];
}
else
{

}
i++;
}
return (dest);
}
