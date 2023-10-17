#include "main.h"

/**
  * swap_int - function that swap value of 2 int
  * @a: the first integer
  * @b: the second integer
  *
  * Return: empty
  */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
