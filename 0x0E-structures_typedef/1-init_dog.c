#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the struct.
 * @name: pointer to a string.
 * @age: pointer to a float.
 * @owner: pointer to a string.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	if (name)
		d->name = name;
	if (age)
		d->age = age;
	if (owner)
		d->owner = owner;
}
