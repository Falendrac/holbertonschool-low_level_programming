#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 followed by a new line
 * But for multiples of three prints Fizz and multiples of five prints Buzz
 * For numbers wich are multiples of both three and five print FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);

		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");

		if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz");

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		if (i != 100)
			putchar(' ');
		else
			putchar('\n');
	}

	return (0);
}
