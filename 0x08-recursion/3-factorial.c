#include "main.h"
/**
*factorial - function to calcule factioral
* @n: the number we will calcul it's factorial
* Return: 1 if n == 1 or 0
* int factorial
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);
return (n * factorial(n - 1));
}

