#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two positive numbers
 * usage: mul num1 num2
 *
 * @argc: Number of arguments need to be only 3
 * @argv: The numbers we want to multiplies
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int lenFArg, lenSArg, loop, i, j, result = 0;
	char *arrayResul;

	if (argc != 3 || isnumber(argv[1]) == 0 || isnumber(argv[2]) == 0)
	{
		_puts("Error");
		exit(98);
	}
	for (lenFArg = 0; argv[1][lenFArg] != '\0'; lenFArg++)
	;
	for (lenSArg = 0; argv[2][lenSArg] != '\0'; lenSArg++)
	;
	arrayResul = _calloc((lenFArg + lenSArg), sizeof(char));
	rev_string(argv[1]);
	rev_string(argv[2]);
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		for (j = 0; argv[2][j] != '\0'; j++)
		{
			result += (arrayResul[i + j] - 48) + (argv[1][i] - 48) * (argv[2][j] - 48);
			arrayResul[i + j] = result % 10 + 48;
			result /= 10;
		}
		if (result != 0)
		{
			arrayResul[i + j] = result + 48;
			result = 0;
		}
	}
	if (arrayResul[i + j - 1] == '0')
		arrayResul[i + j - 1] = '\0';

	rev_string(arrayResul);
	for (loop = 0; arrayResul[loop] != '\0'; loop++)
		_putchar(arrayResul[loop]);

	_putchar('\n');
	free(arrayResul);
	return (0);
}

/**
 * _puts - Print a string, followed by a new line, to stdout
 *
 * @str: The string we want to print
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}

/**
 * isnumber - Search if a string is a number
 *
 * @str: The string we search the number
 *
 * Return: 1 if is a number, otherwise 0
 */
int isnumber(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		else
			str++;
	}

	return (1);
}

/**
 * _calloc - Function that allocates memory for an array
 *
 * @nmemb: Number of element for the array
 * @size: The size of type we want for the array
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int loop;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc((nmemb + 1) * size);

	if (ptr == NULL)
		return (NULL);

	for (loop = 0; loop < nmemb; loop++)
		*(ptr + loop) = '0';

	*(ptr + nmemb) = '\0';

	return (ptr);
}

/**
 * rev_string - Reverse a string
 *
 * @s: The string we reverse
 */
void rev_string(char *s)
{
	char inter;
	int end = 0, start = 0;

	while (s[end + 1] != '\0')
		end++;

	while (end > start)
	{
		inter = s[end];
		s[end] = s[start];
		s[start] = inter;
		end--;
		start++;
	}
}
