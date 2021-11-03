#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Calculator
 * Usage: ./calc number1 operator number2
 * Example: ./calc 1 + 2
 *
 * @argc: Number of argument
 * @argv: List of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(a, b));

	return (0);
}
