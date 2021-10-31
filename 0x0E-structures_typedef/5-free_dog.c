#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees doges
 *
 * @d: The doge we free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
