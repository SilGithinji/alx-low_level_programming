#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int pan = 0, pin = 0;

	while (dest[pan++])
		pin++;
	for (pan = 0; src[pan] && pan < n; pan++)
		dest[pin++] = src[pan];
	return (dest);
}
