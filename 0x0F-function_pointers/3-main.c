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
	int (*operator)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(a, b));

	return (0);
}
