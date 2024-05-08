#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
    size_t i, low, high;

    if (array == NULL)
        return (-1);

    if (size == 0)
        return (-1);

    if (array[0] == value)
        return (0);

    i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    low = i / 2;
    high = i < size - 1 ? i : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    while (low <= high)
    {
        printf("Searching in array: ");
        for (i = low; i < high; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = low + (high - low) / 2;

        if (array[i] == value)
            return (i);
        else if (array[i] < value)
            low = i + 1;
        else
            high = i - 1;
    }

    return (-1);
}
