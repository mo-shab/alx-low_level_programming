#include "main.h"

/**
  * swap_int - function that swap value of 2 int
  * @a: the first integer
  * @b: the second integer
  * @tmp: temp variable to swap the 2 integer
  *
  * Return: empty
  */
void swap_int(int *a, int *b)
{
int *tmp;
*tmp = *a;
*a = *b;
*b = *tmp;
}
