#include "main.h"

/**
 * _strncat - Concatenates two strings adding n character of src to dest
 *
 * @dest: The first string we adding a string
 * @src: The second string we add to dest
 * @n: number of character we add
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int loop, length_dest;

	length_dest = _strlen(dest);

	for (loop = 0; loop < n; loop++)
		if (*(src + loop) != '\0')
			*(dest + length_dest + loop) = *(src + loop);
		else
			loop = n;

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

