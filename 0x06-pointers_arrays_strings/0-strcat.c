#include "main.h"

/**
 * _strcat - Concatenates the string src to string dest
 *
 * @dest: The first string we add an other string
 * @src: The second string we take to add to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int loop, length_dest, length_src;

	length_dest = _strlen(dest);
	length_src = _strlen(src);

	for (loop = 0; loop < length_src; loop++)
		*(dest + length_dest + loop) = *(src + loop);

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

