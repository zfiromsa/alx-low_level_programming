#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * string_toupper - It changes all lowercase char to uppercase.
 * 
 * @str: 
 * @return char* 
 */

char *string_toupper(char *str);
{
*up;
int len, i, j;

len = strlen(str) - 1;
i = 0;
up = str;
while (i <= len)
{
up[i] = toupper(str[i]);
i++;
}
return (up);
}
