#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array of nmemb
 * elements of size bytes and return pointer.
 * @nmemb: the array
 * @size: the size of array allocated
 * Return: NULL, if size or nmemb are 0, Null of malloc failed
 * pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		m[i++] = 0;
	}

	return (m);
}
