#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to uppercase
 *
 * @str: The string we convert all lowercase to uppercase
 *
 * Return: lol
 */
char *string_toupper(char *str)
{
	int loop, length;

	length = _strlen(str);

	for (loop = 0; loop < length; loop++)
		if (*(str + loop) >= 97 && *(str + loop) <= 122)
			*(str + loop) -= 32;

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
