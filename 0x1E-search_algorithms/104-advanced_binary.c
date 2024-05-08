#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
    size_t i, left, right;

    if (array == NULL)
        return (-1);

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = left + (right - left) / 2;

        if (array[i] == value)
        {
            if (i == 0 || array[i - 1] != value)
                return (i);
            right = i;
        }
        else if (array[i] < value)
            left = i + 1;
        else
            right = i;
    }

    return (-1);
}
