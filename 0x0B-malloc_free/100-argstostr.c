#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function to concatenates all argument of a program
 * @ac: the count of the arguments
 * @av: array of the arguments
 *
 * Return: NULL if ac == 0 or av ==NULL
 */

char *argstostr(int ac, char **av)
{
	int i, total_len = 0, position = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_len += strlen(av[i]) + 1;
		}
	}
	result = malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + position, av[i]);
			position += strlen(av[i]);
			result[position] = '\n';
			position++;
		}
	}
	result[total_len] = '\0';

	return (result);
}
