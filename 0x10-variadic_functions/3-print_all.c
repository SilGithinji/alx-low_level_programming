#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *pi, *tact = "";

	va_list string;

	va_start(string, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", tact, va_arg(string, int));
					break;
				case 'i':
					printf("%s%d", tact, va_arg(string, int));
					break;
				case 'f':
					printf("%s%f", tact, va_arg(string, double));
					break;
				case 's':
					pi = va_arg(string, char *);
					if (!pi)
						pi = "(nil)";
					printf("%s%s", tact, pi);
					break;
				default:
					a++;
					continue;
			}
			tact = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(string);
}
