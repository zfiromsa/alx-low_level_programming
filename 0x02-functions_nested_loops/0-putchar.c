#include "main.h"
/**
 * _putchar: - display <putchar> followed by new line
 * Return: Always 0
 */
 
int _putchar()
{
char c[8]={'_','p','u','t','c','h','a','r','\n'};
int i = 0;

while (i < 9)
{
_putchar(c[i]);
i++;
}
return (0);
}
