#include "function_pointers.h"
/**
 * print_name - Function that print name
 * @name: The name to be printed
 * @f: pointer to a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
