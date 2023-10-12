#include<stdarg.h>
#include<stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - print_numbers
 *
 * @separator: parm
 * @n: parm
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int _tmp;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		_tmp = va_arg(ap, int);
		printf("%d", _tmp);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}

