#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
    size_t i, low, high;

    if (array == NULL)
        return (-1);

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        i = low + (((double)(high - low) / (array[high] - array[low])) *
            (value - array[low]));

        if (i >= size)
        {
            printf("Value checked array[%lu] is out of range\n", i);
            return (-1);
        }

        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return (i);
        else if (array[i] < value)
            low = i + 1;
        else
            high = i - 1;
    }

    return (-1);
}
