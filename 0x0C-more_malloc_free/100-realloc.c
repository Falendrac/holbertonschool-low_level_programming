#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free
 * The pointer ptr has been free and the content is copy in a new pointer
 *
 * @ptr: The pointer we want to free and copy the content
 * @old_size: The size of the old pointer
 * @new_size: The size of the new pointer
 *
 * Return: new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int loop;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size <= 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (loop = 0; loop < new_size; loop++)
		*(new_ptr + loop) = *((char *)ptr + loop);

	free(ptr);

	return (new_ptr);
}
