#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Function that return newy allocated space with
 * cintent of s1 followed by s2 and nul termination.
 * @s1: First string
 * @s2: second string
 *
 * Return: NULL if failure or empty string passed
 * The new created string.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_s;
	int len_s1 = 0, len_s2 = 0, i_s1, i_s2, i_news;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	i_s1 = 0;
	i_s2 = 0;
	i_news = 0;
	new_s = malloc(sizeof(char) * (len_s1 + len_s2));
	if (new_s == NULL)
		return (NULL);
	while (i_s1 < len_s1)
	{
		new_s[i_news] = s1[i_s1];
		i_news++;
		i_s1++;
	}
	while (i_s2 < len_s2)
	{
		new_s[i_news] = s2[i_s2];
		i_news++;
		i_s2++;
	}
	new_s[i_news] = '\0';

	return (new_s);
}
