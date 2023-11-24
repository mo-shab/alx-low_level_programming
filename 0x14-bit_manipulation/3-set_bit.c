#include "main.h"

/**
 * set_bit - set the bit at the index
 * @n: the number to idnex
 * @index: the index to set
 * Return: 1 if success -1 if erro
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8);
		return (-1);
	return (!!(*n |= 1L << index));
}
