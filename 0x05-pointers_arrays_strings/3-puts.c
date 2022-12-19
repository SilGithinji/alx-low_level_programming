#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int longv;

	for (longv = 0; str[longv] != '\0'; longv++)
	{
		_putchar(str[longv]);
	}
	_putchar('\n');
}
