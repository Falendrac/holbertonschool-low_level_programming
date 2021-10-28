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
	unsigned int loop;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (loop = 0; loop < nmemb * size; loop++)
		if (size == 1)
			*((char *)ptr + loop) = 0;
		else if (size == 2)
			*((short *)ptr + loop) = 0;
		else if (size == 4)
			*((int *)ptr + loop) = 0;

	return (ptr);
}
