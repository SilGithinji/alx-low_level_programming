#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pi;
	int a, fm;

	if (min > max)
		return (NULL);

	fm = max - min + 1;

	pi = malloc(sizeof(int) * fm);
	if (pi == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		pi[a] = min++;
	return (pi);
}
