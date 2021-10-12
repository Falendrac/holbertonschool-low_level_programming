#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - The keygen for crackme
 *
 * Return: 0
 */
int main(void)
{
	int count = 2772;
	char gen;

	srand(time(NULL));

	while (count > 126)
	{
		gen = rand() % 126;
		count -= gen;
		if (gen != '\0')
			putchar(gen);
	}

	putchar(count);
	return (0);
}

