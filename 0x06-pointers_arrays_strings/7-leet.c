#include "main.h"

/**
 * leet - Encode a string into leet (1337)
 *
 * @str: The string we encode
 *
 * Return: str
 */
char *leet(char *str)
{
	int length, loop1, loop2;
	char upperc[6] = { 'A', 'E', 'O', 'T', 'L', '\0' };
	char lowerc[6] = { 'a', 'e', 'o', 't', 'l', '\0' };
	char number[6] = { '4', '3', '0', '7', '1', '\0' };

	length = _strlen(str);

	for (loop1 = 0; loop1 < length; loop1++)
		for (loop2 = 0; loop2 < 5; loop2++)
			if (*(str + loop1) == upperc[loop2] || *(str + loop1) == lowerc[loop2])
				*(str + loop1) = number[loop2];

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
