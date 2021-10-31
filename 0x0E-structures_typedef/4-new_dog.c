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

	doge->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}

	doge->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	doge->name = _strcpy(doge->name, name);
	doge->age = age;
	doge->owner = _strcpy(doge->owner, owner);

	return (doge);
}

/**
 * _strcpy - Copies the string pointed to by src to the buffer
 * pointed to by dest
 *
 * @dest: The buffer
 * @src: The string pointed
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0, loop;

	while (src[length] != '\0')
		length++;

	for (loop = 0; loop <= length; loop++)
		dest[loop] = src[loop];

	return (dest);
}

/**
 * _strlen - Return the length of a string
 *
 * @s: The String we want to know the length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
