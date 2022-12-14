#include "main.h"
/**
 * _putchar:- prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
char c[8] = "_putchar";
int i = 0;
char ch;
while (i < 8)
{
ch = c[i];
_putchar(ch);
i++;
}
_putchar('\n');
return (0);
}
