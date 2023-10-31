#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function return a pointer to a new string which
 * is a duplicate of the string str.
 * @str: The string to be duplicated
 *
 * Return: NULL if str = NULL
 * pointer of duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
