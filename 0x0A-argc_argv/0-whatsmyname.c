#include <stdio.h>

/**
 * main - Print its name, followed by a new line
 *
 * @argc: Number of argument when the program is executed
 * @argv: Array of pointers of string of arguments passed
 * when the program is executed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
