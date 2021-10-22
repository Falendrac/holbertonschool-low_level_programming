#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and print the result
 *
 * @argv: Number of arguments passed when the program is executed
 * @argc: Array of pointers of Strings passed when the program is executed
 *
 * Return: 0 or 1 if we have an error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 1)
	{
		printf("Error");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
