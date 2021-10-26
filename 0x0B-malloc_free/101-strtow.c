#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * strtow - Splits a string into words
 *
 * @str: The string we split
 *
 * Return: str
 */
char **strtow(char *str)
{
	char **aled;
	int numberWords, i, iWord, iAled = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	numberWords = count_word(str);

	if (numberWords == 0)
		return (NULL);

	aled = malloc(sizeof(char *) * numberWords + 1);

	if (aled == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
		{
			*(aled + iAled) = malloc(sizeof(char) * strwlen((str + i)) + 1);

			if (*(aled + iAled) == NULL)
			{
				for (iAled = 0; iAled < numberWords; iAled++)
					free(*(aled + iAled));

				free(aled);
				return (NULL);
			}

			for (iWord = 0; *(str + i + iWord) != ' ' && *(str + i + iWord); iWord++)
				*(*(aled + iAled) + iWord) = *(str + i + iWord);

			if (iWord > 0)
				iAled++;
			i += strwlen((str + i)) - 1;
		}
	}
	return (aled);
}

/**
 * count_word - Return the number of word in the strings
 *
 * @s: The String we want to know the words
 *
 * Return: length
 */
int count_word(char *s)
{
	int length;

	if (*s != ' ')
		length = 1;
	else
		length = 0;

	while (*s != '\0')
	{
		if (*s != ' ' && *(s - 1) == ' ')
			length++;

		s++;
	}

	return (length);
}

/**
 * strwlen - Return the length of a word in the current string
 *
 * @s: The String we want to know the length
 *
 * Return: length
 */
int strwlen(char *s)
{
	int length = 0;

	while (*(s + length) != ' ' && *(s + length))
		length++;

	return (length);
}
