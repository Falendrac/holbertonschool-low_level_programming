#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: The string we capitalizes all words
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int loop, length;

	length = _strlen(str);

	for (loop = 0; loop < length; loop++)
		if (*(str + loop) >= 97 && *(str + loop) <= 122)
			switch (*(str + loop - 1))
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
					*(str + loop) -= 32;
					break;
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
