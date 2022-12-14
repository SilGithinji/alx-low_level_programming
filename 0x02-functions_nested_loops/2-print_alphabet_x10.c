#include "main.h"

/**
 * print_alphabet_*10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int a;
	char bm;

	for (a = 0; a <= 9; a++)
	{
		for (bm = 'a'; bm <= 'z'; bm++)
			_putchar(bm);
		_putchar('\n');
	}
}
