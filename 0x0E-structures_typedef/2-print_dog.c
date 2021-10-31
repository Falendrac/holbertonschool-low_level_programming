#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print the informations of a dog
 *
 * @d: A pointer of a struct dog to have the informations of a dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %1.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
