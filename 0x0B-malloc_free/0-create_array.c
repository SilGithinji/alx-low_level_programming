#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *pie;
	unsigned int p;

	pie = malloc(sizeof(char) * size);

	if (size == 0 || pie == NULL)
		return (NULL);
	for (p = 0; p < size; p++)
		pie[p] = c;
	return (pie);
}
