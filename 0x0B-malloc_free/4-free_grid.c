#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a two dimensional grid
 * @grid: the array to be freed
 * @height: the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

