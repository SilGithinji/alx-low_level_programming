#include "main.h"
 /**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int v;

	if (n < 0)
		n = -n;
	v = n % 10;
	if (v < 0)
		v = -v;
	_putchar(v + '0');
	return (v);
}
