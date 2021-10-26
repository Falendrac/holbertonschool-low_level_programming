#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Allocated a newly space in memory and copy a
 * string given as a parameter
 *
 * @str: The string we copy
 *
 * Return: new_str
 */
char *_strdup(char *str)
{
	char *new_str;
	int strLength, loop;

	if (str == NULL)
		return (NULL);

	strLength = _strlen(str);
	new_str = malloc(strLength);

	for (loop = 0 ; loop < strLength; loop++)
		*(new_str + loop) = *(str + loop);

	return (new_str);
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
