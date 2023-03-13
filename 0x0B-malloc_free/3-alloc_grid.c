#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * @width: the width of the array.
 * @height: height of the array.
 * Return: pointer to the array, NULL on failure.
 * if width or height is 0 or negative, return NULL.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	while (i < height)
	{
		j = 0;
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
			return (NULL);
		while (j < width)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}
