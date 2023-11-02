#include "main.h"

/**
 * malloc_checked - function that alocate memory using malloc
 * @b: is the number of memory allocated
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		return (98);

	return (m);
}
