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
	char *ptr;
	unsigned int loop;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (loop = 0; loop < nmemb * size; loop++)
			*(ptr + loop) = 0;

	return (ptr);
}
