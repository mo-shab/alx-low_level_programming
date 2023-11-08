#include "function_pointers.h"

/**
 * int_index - Function that return index of an int into an array
 * @array: The array we will look into
 * @size: The size of the array
 * @cmp: function to compare.
 *
 * Return: -1 if no element matches or size <0.
 * The element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
