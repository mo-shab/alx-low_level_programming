#include "main.h"

/**
 * clear_bit - clears the bit at the index
 * @n: the number
 * @index: the index to be clear
 * Return: 1 if succes -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
