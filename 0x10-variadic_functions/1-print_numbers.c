#include "variadic_functions.h"

/**
 * print_numbers - function that print number followed by new line.
 * @separator: The separator of the numbers
 * @n: count of numbers.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		for (i = 0; i < n; i++)
			printf("%d ", va_arg(args, int));
	else
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(args, int), separator);

	printf("\n");
	va_end(args);
}

