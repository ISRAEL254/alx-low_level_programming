#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: pointer to name of the dog
 * @age: age f the dog
 * @owner: pointer to name of the owner
 *
 * Return: A pointer to the new dog_t object, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/**
	 * allocate memory for a new dog_t object
	 */
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	return (NULL);

	/**
	 * Allocate memory for copies of the name and owner strings
	 */
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);

	}

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	/**
	 * Copy the name and owner strings into the new dog_t object
	 */

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	/**
	 * Set the age property
	 */
	d->age = age;

	return (d);
}

