#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function to print the sum of the diagram
 * @a: is the array of arrays
 * @size: the size of the array
 * Return: Nothing
*/

void print_diagsums(int *a, int size)
{
int i, j, sum = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum += (a + i)[j];
}
}
printf("%d,", sum);
sum = 0;
for (i = size; i != 0; i--)
{
for (j = size; j != 0; j--)
{
if (i == j)
{
sum += (a + i)[j];
}
}
}
printf("%d", sum);
}
