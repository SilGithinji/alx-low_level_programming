#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *v;
	int b, z = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;
	v = malloc(sizeof(char) * (b + 1));

	if (v == NULL)
		return (NULL);
	for (z = 0; str[z]; z++)
		v[z] = str[z];
	return (v);
}
