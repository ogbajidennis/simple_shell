#include "main.h"

/**
 * free_grid - frees the allocated memory used to excute last program
 * @grid: pointer to the grid
 * @height: Height of the grid
 *
 * Return: NULL
 */

void free_grid(char **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
