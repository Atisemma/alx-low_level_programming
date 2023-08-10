#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid
 * @grid: the array to be freed
 * @height: the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		free(grid);
		}
	}
}

