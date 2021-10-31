#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: doge
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	doge = malloc(sizeof(dog_t));

	if (doge == NULL)
		return (NULL);

	doge->name = name;
	doge->age = age;
	doge->owner = owner;

	return (doge);
}
