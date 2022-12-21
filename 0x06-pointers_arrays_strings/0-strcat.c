#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strcat - concatenates two strings.
 * @dest: first
 * @src: second
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int len;

len = strlen(dest) + strlen(src) - 1;
dest = (char*) malloc(len * sizeof(char));
strcat(dest, src);

free(dest);
return (dest);
}
