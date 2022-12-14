#include "main.h"
 /**
  * print_last_digit - prints last digit
  * @n: number
  * Return: value of last digit
  */
int print_last_digit(int n)
{
	int v = n % 10;

	if (v < 0)
		v *= -1;
	_putchar(v + '0');
	return (0);
}
