#include "main.h"
/**
 * alloc_grid - prints an grid of two integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **res;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = malloc(sizeof(int *) * height);

	if (res == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		res[a] = malloc(sizeof(int) * width);

		if (res[a] == NULL)
		{
			free(res);
			for (b = 0; b <= height; b++)
				free(res[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			res[a][b] = 0;
	}
	return (res);
}
