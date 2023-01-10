#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int e, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
		return (NULL);
	for (e = 0; e < height; e++)
	{
		s[e] = malloc(sizeof(int) * width);
		if (s[e] == NULL)
		{
			for (; e >= 0; e--)
				free(s[e]);
			free(s);
			return (NULL);
		}
	}
	for (e = 0; e < height; e++)
	{
		for (d = 0; d < width; d++)
			s[e][d] = 0;
	}
	return (s);
}
