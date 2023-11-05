#include "dog.h"

/**
 * init_dog - Function that initialize variable of tupe struct dog
 * @d: Name struct of the dog to be initialized
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
