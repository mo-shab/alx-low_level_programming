#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - : function that concatenates two strigns
 * @s1: first string
 * @s2: second string
 * @n: n bytes from s2
 *
 * Return: pointer to new string, or NULL if failed.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	unsigned int len_s1 = 0, len_s2 = 0, i = 0, i_s = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	new_s = malloc(sizeof(char) * (len_s1 + n + 1));
	if (new_s == NULL)
		return (NULL);
	while (i < len_s1)
	{
		new_s[i_s] = s1[i];
		i++;
		i_s++;
	}
	i = 0;
	while (i < n)
	{
		new_s[i_s] = s2[i];
		i++;
		i_s++;
	}
	new_s[i_s] = '\0';

	return (new_s);
}
