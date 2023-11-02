#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that create an array starting with min to max
 * @min: the start of the array
 * @max: the final of the array
 *
 * Return: NULL if min > max or malloc fail, the pointer to the array created
 */

int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);
	array  = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}

	return (array);
}
