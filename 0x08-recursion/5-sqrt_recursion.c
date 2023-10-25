#include "main.h"

int _sqrt(int n, int j);
/**
* _sqrt_recursion - function return square root of a number
* @n: the number
* Return: square root of n
*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
* _sqrt - function to check
* @j: iterated number for the square number
* @n: the number we need to find
* Return:   -1 or square number
*/
int _sqrt(int n, int j)
{
int sq = j * j;
if (sq > n)
return (-1);
if (sq == n)
return (j);
return (_sqrt(n, j + 1));
}
