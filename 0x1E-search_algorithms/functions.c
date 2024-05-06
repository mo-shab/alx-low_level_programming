#include "search_algos.h"

/**
 * _put - function that prints a string
 * 
 * @str: string to print
 * 
 * Return: void
*/

void _put(char *str)
{
    if (str == NULL)
        return;

    while (*str)
    {
        putchar(*str);
        str++;
    }
}
