#include <stdlib.h>
#include "main.h"
/**
  * _put - function that print a string followed by new line.
  * @str: the stiring to be printed
  *
  * Return: nothing
  */
void _put(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}

/**
 * main - main function
 *
 * Return: nothing
 */

int main(void)
{
	_put(__FILE__);
	return (0);
}
