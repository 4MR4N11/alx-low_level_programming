#include "dog.h"

/**
 * free_dog - free struct.
 * @d: pointer to the struct.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
