#include <stdio.h>
#include <stdlib.h>

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
			if (*argv[loop] >= 48 && *argv[loop] <= 57)
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
