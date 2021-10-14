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
	int loop, loopsep, length;
	char sep[] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 42, '{', '}', '\0' };

	length = _strlen(str);

	if (length != 0)
		for (loop = 0; loop < length; loop++)
			if (*(str + loop) >= 97 && *(str + loop) <= 122)
				for (loopsep = 0; sep[loopsep] != '\0'; loopsep++)
					if (*(str + loop - 1) == sep[loopsep])
					{
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
