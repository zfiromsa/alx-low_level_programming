#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: parm
 */
void print_all(const char *format, ...)
{
	va_list ap;
	char _char, *_string;
	int _int;
	float _float;

	va_start(ap, format);

	while (*format)
	{
		if (*format == 'i')
		{
			_int = va_arg(ap, int);
			printf("%d", _int);
		}
		else if (*format == 'f')
		{
			_float = va_arg(ap, double);
			printf("%f", _float);
		}
		else if (*format == 's')
		{
			_string = va_arg(ap, char *);
			if (_string == NULL)
				printf("(nil)");
			else
				printf("%s", _string);
		}
		else if (*format == 'c')
		{
			_char = va_arg(ap, int);
			printf("%c", _char);
		}
		format++;
		if (*format != '\0')
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}

