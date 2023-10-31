#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - function that free grid memory
 * @grid: the grid to be freed.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
