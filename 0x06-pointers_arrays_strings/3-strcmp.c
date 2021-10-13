#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: The first string we compare
 * @s2: The second string we compare
 *
 * Return: compare
 */
int _strcmp(char *s1, char *s2)
{
	int loop, length_s1, length_s2, max_length, compare = 0;

	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);

	if (length_s1 > length_s2)
		max_length = length_s1;
	else
		max_length = length_s2;

	for (loop = 0; loop < max_length && compare == 0; loop++)
		compare += *(s1 + loop) - *(s2 + loop);

	return (compare);
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

