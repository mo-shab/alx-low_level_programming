#include <stdio.h>
#include "main.h"
/**
* print_number - function to print a number using putchar
* @n: is the number to be printed
* Return: nothing
*/
void print_number(int n)
{
unsigned int j = n;
if (n < 0)
{
_putchar('-');
n *= -1;
j = n;
}
j /= 10;
if (j != 0)
print_number(j);
_putchar((unsigned int) n % 10 + '0');
}
