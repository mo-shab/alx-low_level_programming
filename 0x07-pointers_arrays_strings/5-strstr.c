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
int i, j = 0;

for (i = 0; haystack[i] != '\0'; i++)
{
	for ( ;needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
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
