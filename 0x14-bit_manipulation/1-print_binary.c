#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @b: The binary
 * 
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
    int var, i;

    for (i = 31; i>=0; i--)
    {
        var >> n + i;
        if (var & 1)
            _putchar('1');
        else
            _putchar('0');
    }
    _putchar('\n');
}
