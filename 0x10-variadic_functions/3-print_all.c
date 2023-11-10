#include "variadic_functions.h"

/**
 * printf_char - print a char from args
 * @list: va_list to print from
 * Return: Nothing
 */
void printf_char(va_list list)
{
	printf("%c", va_arg(list, char));
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
	printf("%f", va_arg(list, float));
}

/**
 * printf_string - print a string from args
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
void printAll(const char * const format, ...)
{
	const char *ptr;
	va_list list;
	FormatKey key[4] = {{printChar, 'c'}, {printInt, 'i'},
				{printFloat, 'f'}, {printString, 's'}};
	int keyIndex = 0, notFirst = 0;

	ptr = format;
	va_start(list, format);

	while (format != NULL && *ptr)
	{
		if (key[keyIndex].spec == *ptr)
		{
			if (notFirst)
				printf(", ");
			notFirst = 1;
			key[keyIndex].printer(list);
			ptr++;
			keyIndex = -1;
		}
		keyIndex++;
		ptr += keyIndex / 4;
		keyIndex %= 4;
	}
	printf("\n");

	va_end(list);
}
