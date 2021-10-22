#include <stdio.h>
#include <stdlib.h>

int isnumber(char *str);

/**
 * main - Add positive numbers and prints the result
 *
 * @argc: Number of arguments passed when the program is executed
 * @argv: Array of pointers of strings passed when the program is executed
 *
 * Return: 0 or 1 if we have an error
 */
int main(int argc, char *argv[])
{
	int result = 0, loop;

	if (argc > 1)
	{
		for (loop = 1; loop < argc; loop++)
			if (isnumber(argv[loop]) == 1)
				result += atoi(argv[loop]);
			else
			{
				printf("Error\n");
				return (1);
			}
	}

	printf("%d\n", result);

	return (0);
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
			return (0);
		else
			str++;
	}

	return (1);
}
