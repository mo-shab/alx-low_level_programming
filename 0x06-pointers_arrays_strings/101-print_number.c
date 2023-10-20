#include <stdio.h>
#include "main.h"
/**
* print_number - function to print a number using putchar
* @n: is the number to be printed
* Return: nothing
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
