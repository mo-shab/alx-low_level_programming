#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return lenght of a string
 * @str: the str we want
 *
 * Return: Count of str
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

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
	int len_name, len_owner;

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
	len_owner = _strlen(owner);
	n_d->owner = malloc(sizeof(char) * len_owner);
	if (n_d->owner == NULL)
	{
		free(n_d);
		return (NULL);
	}
	n_d->owner = _strcpy(owner, n_d->owner);

	return (n_d);
}
