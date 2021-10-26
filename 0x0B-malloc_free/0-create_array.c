#include <stdlib.h>

/**
 * create_array - Create an array of chars, and initializes
 * it with a specific char
 *
 * @size: The size of the array of chars
 * @c: The char we use to initialize the array
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	unsigned int loop;
	char *str;

	if (size <= 0)
		return (NULL);

	str = malloc(size);

	for (loop = 0; loop < size; loop++)
	{
		*(str + loop) = c;
	}

	return (str);
}
