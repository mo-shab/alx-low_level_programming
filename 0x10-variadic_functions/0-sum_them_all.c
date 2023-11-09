#include "variadic_functions.h"

/**
 * sum_them_all - function that return sum of all parameters
 * @n: count of the parameter
 *
 * Return: Sum of all parametre
 * 0 if n ==0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	int par;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		par = va_arg(args, int);
		sum += par;
	}

	return (sum);
}
