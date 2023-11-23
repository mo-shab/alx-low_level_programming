#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: The binary
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int str_len = strlen(b) - 1;
	unsigned int dec_val = 1;

	if (b == NULL)
		return (0);
	while (str_len >= 0)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);
		else if (b[str_len] == '1')
			sum += dec_val;
		dec_val *= 2;
		str_len--;
	}

	return (sum);
}
