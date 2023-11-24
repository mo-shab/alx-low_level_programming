#include "main.h"

/**
 * flip_bits - return number of bits that
 * would need to be flipped to transforme one numb>
 * @n: the first number
 * @m: second number
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val)
	{
		if (xor_val & 1ul)
		count++;
		xor_val = xor_val >> 1;
	}
	return (count);
}
