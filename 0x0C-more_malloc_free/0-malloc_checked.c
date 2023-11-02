#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
		exit(98);

	return (m);
}
