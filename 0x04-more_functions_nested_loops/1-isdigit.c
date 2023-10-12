#include "main.h"

/**
 * _isdigit - is a function that checks for a digit (0 to 9)
 * @c: is the variable we gonna test
 * return: 1 if c is a digit 0 for else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
