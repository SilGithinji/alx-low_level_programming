#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 **/
void free_grid(int **grid, int height)
{
	int den;

	for (den = 0; den < height; den++)
	{
		free(grid[den]);
	}
	free(grid);
}
