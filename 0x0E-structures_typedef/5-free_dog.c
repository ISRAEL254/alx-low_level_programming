#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: a pointer to to the dog_t object to free
 *
 * Return : void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
