#include "search_algos.h"

/**
* jump_search - function that searches for a value
* in a sorted array of integers
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: the first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, prev;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	prev = 0;

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

	for (i = prev; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
