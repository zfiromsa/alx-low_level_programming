#include "main.h"
/**
 * main - display <putchar> followed by new line
 * Return: Always 0
 */
 
int _putchar()
{
char ch[]={'_','p','u','t','c','h','a','r','\n'};
int i=0;

while(i<10)
{
_putchar(ch[i]);
i++;
}
return (0);
}
