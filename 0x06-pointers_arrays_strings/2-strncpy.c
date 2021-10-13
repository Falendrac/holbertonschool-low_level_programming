#include "main.h"

/**
 * _strncpy - Copies a string in another string
 *
 * @dest: The first string we return with the content copying
 * @src: The second string we copy
 * @n: Number of character we copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int loop;

	for (loop = 0; loop < n && *(src + loop) != '\0' ; loop++)
		*(dest + loop) = *(src + loop);

	for ( ; loop < n; loop++)
		*(dest + loop) = '\0';

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

