#include "main.h"

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 **/

void print_number(int n)
{
	unsigned int ab = n;

	if (n < 0)
	{
		_putchar('-');
		ab = -ab;
	}
	if ((ab / 10) > 0)
		print_number(ab / 10);
	_putchar((ab % 10) + '0');
}
