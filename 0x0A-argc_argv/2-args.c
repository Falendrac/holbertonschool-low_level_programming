#include <stdio.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: Number of arguments passed when the programm is executed
 * @argv: Array of pointers of strings passed when the programm is executed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int loop;

	for (loop = 0; loop < argc; loop++)
		printf("%s\n", argv[loop]);

	return (0);
}
