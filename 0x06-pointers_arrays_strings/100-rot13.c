#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 *
 * @str: param
 * Return: Always str.
 */

char *rot13(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] >= 65 && str[i] <= 77)
{
str[i] = str[i] + 13; 
}
else if(str[i] >= 78 && str[i] <= 90)
{
str[i] = str[i] - 13;
}

else if (str[i] >= 97 && str[i] <= 109)
{
str[i] = str[i] + 13; 
}
else if(str[i] >= 110 && str[i] <= 122)
{
str[i] = str[i] - 13;
}

else
{
}
i++;
}
return (str);
}
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}