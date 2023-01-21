#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list cat;
	unsigned int a, v = 0;

	va_start(cat, n);

	for (a = 0; a < n; a++)
		v += va_arg(cat, int);

	va_end(cat);

	return (v);
}
