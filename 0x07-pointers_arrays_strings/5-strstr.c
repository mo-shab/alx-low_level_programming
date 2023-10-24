#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] <= '\0'; i++)
{
	for (j = i; needle[j] <= '\0'; j++)
	{
		if (haystack[j] != needle[j])
		{
			break;
		}
	}
	if (needle[j] == '\0')
	{
		return (haystack + i);
	}
}
return ('\0');
}
