#include "main.h"
/**
* _pow_recursion - return x pow y
* @x: the x
* @y: the y
* Return: x pow y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
