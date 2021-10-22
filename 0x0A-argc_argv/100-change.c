#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: Number of arguments passed when the program is executed
 * @argv: Array of pointers of strings passed when the program is executed
 *
 * Return: 0 or 1 if we have an error
 */
int main(int argc, char *argv[])
{
	int index = 0, numberOfCoins = 0, cents;
	int coins[5] = { 25, 10, 5, 2, 1 };

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (atoi(argv[1]) > 0)
		while (cents != 0)
		{
			if (coins[index] <= cents)
			{
				numberOfCoins++;
				cents -= coins[index];
				index = 0;
			}
			else
				index++;
		}

	printf("%d\n", numberOfCoins);

	return (0);
}
