#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Function that create array of char and intialize it.
 * @size: The size of the array.
 * @c: the charachter we initialize the array.

 * Return: NULL if size = 0, array if not
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	else
	{
		a = malloc(sizeof(char) * size);

		i = 0;
		while (i < size)
		{
			a[i] = c;
			i++;
		}
		return (a);
	}
}
