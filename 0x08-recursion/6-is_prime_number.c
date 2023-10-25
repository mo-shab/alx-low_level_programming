#include "main.h"

int check(int n, int i);
/**
* is_prime_number - determin if n is prime
* @n: the number
* Return: 1 if prim 0 if not
*/

int is_prime_number(int n)
{
if (n == 0 || n == 1)
return (0);
return (check(n, 2));
}
/**
* check - check if n is prime
* @i: iterate number
* @n: number to determin
* Return: if prime or not
*/

int check(int n, int i)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
return (check(n, i + 1));
}
