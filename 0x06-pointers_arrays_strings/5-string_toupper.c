#include "main.h"
/**
 * string_toupper - It changes all lowercase char to uppercase.
 * 
 * @str:
 * @return char*
 */

char *string_toupper(char *str)
{
int len, i, j;

i = 0;
len = strlen(str) - 1;
while (i <= len)
{
if (str[i] >= 97 && str[i] <= 122)
{
char tmp = str[i];
str[i] = tmp - 32;
}
i++;
}
return (str);
}
