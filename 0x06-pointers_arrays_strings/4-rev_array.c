#include "main.h"
/**
* reverse_array - function to reverse array
* @a: the array needed to be reversed
* @n : the number of element of the array
* Return nothing
*/
void reverse_array(int *a, int n)
{
int tmp, i;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}

