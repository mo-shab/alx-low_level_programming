#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - print a char from args
 * @list: va_list to print from
 * Return: Nothing
 */
void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - print an int from args
 * @list: va_list to print from
 * Return: Nothing
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - print a float from args
 * @list: va_list to print from
 * Return: Nothing
 */
void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - print a string from var args
 * @list: va_list to print from
 * Return: Nothing
 */
void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - prints various types given a format string for the arguments
 * @format: string containing type information for args
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;
	fun key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
			   {printf_float, 'f'}, {printf_string, 's'} };
	int keyI = 0, notfirst = 0;

	ptr = format;
	va_start(list, format);
	while (format != NULL && *ptr)
	{
		if (key[keyI].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyI].f(list);
			ptr++;
			keyI = -1;
		}
		keyI++;
		ptr += keyI / 4;
		keyI %= 4;
	}
	printf("\n");

	va_end(list);
}
