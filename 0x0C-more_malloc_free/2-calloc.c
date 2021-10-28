#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function that allocates memory for an array
 *
 * @nmemb: Number of element for the array
 * @size: The size of type we want for the array
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
