#include "main.h"
/**
 * print_sign: is a function that prints the sign of a number
 * Return: 1 And print + if n is greater than 0.
 * 0 and print 0 if n is 0.
 * -1 and print -1 if n less than 0.
 * @n: is the num we will test on it.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if ( n == 0)
		{
			_putchar('0');
			return (0);
		} else
			{
			_putchar('-');
			return (-1);
			}
}
