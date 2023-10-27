#include "main.h"
/**
* _memcpy - function that copies memory area.
* @dest: string to copy from src
* @src: the source where copy from
* @n: number of copy
* Return: char with the data copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
