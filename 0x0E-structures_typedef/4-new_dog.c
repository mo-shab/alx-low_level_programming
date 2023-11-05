#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *n_d = malloc(sizeof(dog_t));

	if (n_d == NULL)
		return (NULL);
	n_d->name = name;
	n_d->age = age;
	n_d->owner = owner;

	return (n_d);
}
