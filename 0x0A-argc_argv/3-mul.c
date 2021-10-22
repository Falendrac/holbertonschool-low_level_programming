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
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
