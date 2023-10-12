#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - that prints strings, followed by a new line.
 *
 * @separator: parm
 * @n: parm
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *_tmp;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		_tmp = va_arg(ap, char *);
		if (_tmp == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", _tmp);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
}

