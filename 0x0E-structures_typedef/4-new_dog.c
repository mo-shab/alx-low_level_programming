#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return lenght of a string
 * @str: the str we want
 *
 * Return: Count of str
 */

int _strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;

	return (count);
}

/**
 * _strcpy - copy string
 * @src: string source
 * @dest : string destination
 *
 * Return: pointer to string destination
 */

char *_strcpy(char *src, char *dest)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}

/**
 * new_dog - function that create new dog
 * @name:  Name of the dog.
 * @age:   Age of the dog.
 * @owner: owner of the dog.
 *
 * Return: NULL if the function failed
 * pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_d;
	int len_name;

	n_d = malloc(sizeof(dog_t));
	if (n_d == NULL)
		return (NULL);
	len_name = _strlen(name);
	n_d->name = malloc(sizeof(char) * len_name);
	if (n_d->name == NULL)
	{
		free(n_d);
		return (NULL);
	}
	n_d->name = _strcpy(name, n_d->name);
	n_d->age = age;
	n_d->owner = malloc(sizeof(char) * _strlen(n_d->owner));
	if (n_d->owner == NULL)
	{
		free(n_d);
		free(n_d->name);
		return (NULL);
	}
	n_d->owner = _strcpy(owner, n_d->owner);

	return (n_d);
}
