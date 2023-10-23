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
int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
{
s += i;
return (s);
}
}
i++;
return ('\0');
}
