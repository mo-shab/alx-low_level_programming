#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, b, t = 0;

for (i = 0; accept[i] != '\0'; i++)
{
b = 0;
while (s[b] != 32)
{
if (accept[i] == s[b])
{
t++;
}
b++;
}
}
return (t);
}
