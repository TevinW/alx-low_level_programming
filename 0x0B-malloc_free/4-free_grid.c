#include "main.h"

/**
 * free_grid - frees 2d array
 *
 * @grid: 2d grid
 * @height: height of grid
 * Description: frees memory of grid
 * Return: none
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
