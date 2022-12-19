#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int alp;

	alp = 0;
	while (str[alp] != '\0')
	{
		if (alp % 2 == 0)
		{
			_putchar(str[alp]);
		}
		alp++;
	}
	_putchar('\n');
}
