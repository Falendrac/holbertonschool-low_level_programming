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
	int numberWords, loop1, index_word, index_aled = 0;

	if (str == NULL)
		return (NULL);

	numberWords = count_word(str);

	if (numberWords == 0)
		return (NULL);

	aled = malloc(sizeof(char *) * numberWords + 1);

	if (aled == NULL)
		return (NULL);

	for (loop1 = 0; *(str + loop1) != '\0'; loop1++)
	{
		if (*(str + loop1) != ' ')
		{
			*(aled + index_aled) = malloc(sizeof(char) * strwlen((str + loop1)) + 1);

			if (*(aled + index_aled) == NULL)
			{
				for (index_aled = 0; index_aled < numberWords; index_aled++)
					free(*(aled + index_aled));

				free(aled);
				return (NULL);
			}

			for (index_word = 0; *(str + loop1 + index_word) != ' '; index_word++)
				*(*(aled + index_aled) + index_word) = *(str + loop1 + index_word);

			if (index_word > 0)
				index_aled++;
			loop1 += strwlen((str + loop1)) - 1;
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
	int length = 0;

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

	while (*s != ' ')
	{
		s++;
		length++;
	}

	return (length);
}
