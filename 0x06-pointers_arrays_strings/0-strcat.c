 #include "main.h"
 /**
 * _strcat - function appends the src to dest with \0 at the end
 * @src: The char source
 * @dest: the destination of the appends
 * @var: variable that hold the pointer of dest
 * return: a pointer to the result dest
 */
char *_strcat(char *dest, char *src)
{
char *var = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (var);
}

