#include "main.h"
#include <string.h>
/**
* _puts_recursion - function to print a char s
* @s: the string we want to print
* Return: nothing
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
