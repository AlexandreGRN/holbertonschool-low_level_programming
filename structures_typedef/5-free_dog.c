#include "dog.h"

/**
 * free_dog - fct that free dogs
 * @d: dogs
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
