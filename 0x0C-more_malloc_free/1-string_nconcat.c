#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * It's returned a pointer shall point to a newly allocates space in memory,
 * wich contains s1, followed by the first n bytes of s2 and null terminated
 *
 * @s1: The first string we concatenate
 * @s2: The second string we concatenate
 * @n: The number of bytes of the second int we want
 *
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int lengthS1, lengthS2, loop;

	if (s1 == NULL)
		lengthS1 = 0;
	else
		lengthS1 = _strlen(s1);

	if (s2 == NULL)
		lengthS2 = 0;
	else
		lengthS2 = _strlen(s2);

	if (n < lengthS2)
		lengthS2 = n;

	str = malloc(sizeof(char) * (lengthS1 + lengthS2) + 1);

	if (str == NULL)
		return (NULL);

	for (loop = 0; loop < lengthS1; loop++)
		str[loop] = s1[loop];

	for (loop = 0; loop < lengthS2; loop++)
		str[lengthS1 + loop] = s2[loop];

	str[lengthS1 + lengthS2] = '\0';

	return (str);
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
