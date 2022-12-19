#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int full, qtr;

	qtr = 0;
	while (str[qtr] != '\0')
		qtr++;

	full = qtr / 2;

	if (qtr % 2 == 1)
		full++;
	while (full < qtr)
	{
		_putchar(str[full]);
		full++;
	}
	_putchar('\n');
}

