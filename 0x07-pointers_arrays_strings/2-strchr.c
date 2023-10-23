#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
int i = 0, b;

while (s[i])
{
i++;
}
for (b = 0; b <= i; b++)
{
if (c == s[b])
{
s += b;
return (s);
}
}
return ('\0');
}
