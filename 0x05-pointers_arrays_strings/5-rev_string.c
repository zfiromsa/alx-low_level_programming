#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to an char as parameter
 * Return: return void
 */
void rev_string(char *s)
{
char tmp;
int j, k, i;

i = 0;
tmp = s;
while (s[i] != '\0')
{
i++;
}
k = 0;
j = i - 1;
while(k < j)
{
tmp = s[k];
s[k] = s[j];
s[j] = tmp;
k++;
j--;
}
}
