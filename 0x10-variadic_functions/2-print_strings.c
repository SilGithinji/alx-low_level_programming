#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lines;
	char *pi;
	unsigned int alpha;

	va_start(lines, n);

	for (alpha = 0; alpha < n; alpha++)
	{
		pi = va_arg(lines, char *);

		if (pi == NULL)
			printf("(nil)");
		else
			printf("%s", pi);

		if (alpha != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(lines);
}
