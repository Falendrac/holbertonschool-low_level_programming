#include <stdio.h>

/**
 * main - Print the number of arguments passed into it
 *
 * @argc: Number of arguments passed when the programm is executed
 * @argv: Array of pointers of strings passed when the program is executed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
