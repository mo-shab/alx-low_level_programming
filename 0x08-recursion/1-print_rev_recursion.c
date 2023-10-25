#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - function to print a char s
* @s: the string we want to print
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
*s = strrev(s);
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_print_rev_recursion(s);
}
