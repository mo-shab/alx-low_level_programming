#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Function return pointer to 2D array of int
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer of 2 array
 * or NULL if width or height is 0 or negative or failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
