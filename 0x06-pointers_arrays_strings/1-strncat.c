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
int i = 0;

while (*dest != '\0')
{
dest++;
}
while (i != n)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (var);
}
