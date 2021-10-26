#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 *
 * @s1: The first string to concatenates
 * @s2: The second string to concatenates
 *
 * Return: str
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1Length, s2Length, loop;

	if (s1 != NULL)
		s1Length = _strlen(s1);
	else
		s1Length = 0;

	if (s2 != NULL)
		s2Length = _strlen(s2);
	else
		s2Length = 0;

	str = malloc(s1Length + s2Length + 1);

	if (str == NULL)
		return (NULL);


	for (loop = 0; loop < (s1Length + s2Length); loop++)
	{
		if (loop < s1Length)
			*(str + loop) = *(s1 + loop);
		else
			*(str + loop) = *(s2 + loop - s1Length);
	}

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
