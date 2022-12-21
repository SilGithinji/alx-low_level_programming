#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int pan = 0, pin = 0;

	while (dest[pan++])
		pin++;
	for (pan = 0; src[pan]; pan++)
		dest[pin++] = src[pan];
	return (dest);
}
