#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of a program
 *
 * @ac: Numbers of arguments
 * @av: Array of strings
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int loop, loop_ac, loop_str, sumOfLength = 1;
	int *av_length;

	if (ac <= 1 || av == NULL)
	{
		return (NULL);
	}

	av_length = malloc(sizeof(int) * ac);

	for (loop = 0; loop < ac; loop++)
	{
		av_length[loop] = _strlen(*(av + loop));
		sumOfLength += _strlen(*(av + loop));
	}

	str = malloc(sizeof(char) * sumOfLength + ac);

	if (str == NULL)
	{
		return (NULL);
		free(str);
	}

	for (loop = 0, loop_str = 0; loop < ac; loop++)
	{
		for (loop_ac = 0; loop_ac < av_length[loop]; loop_ac++, loop_str++)
			*(str + loop_str) = *(*(av + loop) + loop_ac);

		*(str + loop_str) = '\n';
		loop_str++;
	}

	free(av_length);

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
