#include "main.h"
/**
 * char *_strchr - function that locates a character in a string.
 * @s: the stirng we need to look the chacarter into
 * @c: the character
 * Return: pointer to the first occurrence of the character c in the string s, 
 * or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
s++;
}
if (c == '\0')
{
 return (s);
}
}
return (NULL);
}

