#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, vi = 0;
	unsigned long int tan;

	for (a = 63; a >= 0; a--)
	{
		tan = n >> a;

		if (tan & 1)
		{
			_putchar('1');
			vi++;
		}
		else if (vi)
			_putchar('0');
	}
	if (!vi)
		_putchar('0');
}
