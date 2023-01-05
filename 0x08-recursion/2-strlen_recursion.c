#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int cap = 0;

	if (*s)
	{
		cap++;
		cap += _strlen_recursion(s + 1);
	}

	return (cap);
}
