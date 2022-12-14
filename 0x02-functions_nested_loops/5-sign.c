#include "main.h"

/**
 * print_sign - prints sign of a no
 * @c:number of the sign
 * Return: 1 if number is greater than 0
 * 0 if no is 0
 * -1 if no is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
