#include "main.h"

/**
  * _puts - function that print a string followed by new line.
  * @str: the stiring to be printed
  *
  * Return: nothing
  */
void _puts(char *str)
{
while(str)
{
_putchar(*str);
str++;
}
}
