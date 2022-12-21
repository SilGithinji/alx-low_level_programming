#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int lev = 0;

	while (n[lev] != '\0')
	{
		if (n[lev] >= 'a' && n[lev] <= 'z')
			n[lev] = n[lev] - 32;
		lev++;
	}
	return (n);
}
