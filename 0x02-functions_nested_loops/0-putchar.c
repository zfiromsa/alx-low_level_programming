#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

 _putchar();
int main(void)
{
char c[8]="_putchar";
int i = 0;
char ch;
while (i <= 8)
{
ch = c[i];
_putchar(ch);
i++;
}
_putchar('\n');
return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}