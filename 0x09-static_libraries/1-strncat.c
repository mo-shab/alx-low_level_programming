#include "main.h"
/**
* _strncat - function appends the src to dest with max n from src
* @src: The char source
* @dest: the destination of the appends
* @n: how many bytes used from the sources
* Return: a pointer to the result dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *var = dest;

while (*dest != '\0')
{
dest++;
}
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (var);
}

