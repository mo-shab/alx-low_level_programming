#include "main.h"
#include <stdio.h>
/**
* _memset- function to fills memory with a constant byte.
* @s: the string to be filled
* @b: the data to fill the s
* @n: number of files
* Return: mempry for the final s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

