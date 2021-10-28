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
	unsigned int lengthS1 = 0, lengthS2 = 0, loop;

	if (s1 != NULL)
		while (s1[lengthS1] != '\0')
			lengthS1++;

	if (s2 != NULL)
		while (s2[lengthS2] != '\0')
			lengthS2++;

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
