#include "main.h"
/**
 * free_grid - frees a two dimensional grid
 * @grid: the array to be freed
 * @height: the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid[a]);
}
