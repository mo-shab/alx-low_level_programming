#include "main.h"
/**
* _sqrt_recursion - function return square root of a number
* @n: the number
* Return: square root of n
*/
int sqrt(int n, int j);

int _sqrt_recursion(int n)
{
return sqrt(n , 1);
}

int sqrt(int n, int j)
{
int sq = j * j;
if (sq > n)
return (-1);
if (sq == n)
return (j);
return (sqrt(n, j + 1));
}
