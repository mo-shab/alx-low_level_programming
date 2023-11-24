#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: The binary
 *
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, prin = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			prin++;
		}
		else if (prin)
			_putchar('0');
	}
	if (!prin)
	_putchar('0');
}
