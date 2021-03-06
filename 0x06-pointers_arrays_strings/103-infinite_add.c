#include "main.h"

void swap_char(char *a, char *b);

/**
 * infinite_add - Adds two numbers
 *
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer we add the result and return
 * @size_r: The buffer size
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int loop, result = 0, n1_length, n2_length, length_max, max;

	n1_length = _strlen(n1);
	n2_length = _strlen(n2);

	if (n1_length > n2_length)
		length_max = n1_length;
	else
		length_max = n2_length;

	n1_length--;
	n2_length--;

	if (size_r != 0 && length_max < size_r - 1)
	{
		for (loop = 0; loop < length_max; loop++, n1_length--, n2_length--)
		{
			if (n1_length >= 0 && n2_length >= 0)
				result += *(n1 + n1_length) - 48 + *(n2 + n2_length) - 48;

			else if (n1_length < 0 && n2_length >= 0)
				result += *(n2 + n2_length) - 48;

			else if (n1_length >= 0 && n2_length < 0)
				result += *(n1 + n1_length) - 48;

			*(r + loop) = result % 10 + 48;
			result /= 10;
		}

		if (result != 0)
		{
			*(r + length_max) = result + 48;
			length_max++;
			*(r + length_max) = '\0';
		}
		else
			*(r + length_max) = '\0';
	}
	else
		return (0);

	for (loop = 0, max = length_max - 1; loop < max; loop++, max--)
		swap_char((r + loop), (r + max));

	return (r);
}

/**
 * _strlen - Return the length of a string
 *
 * @s: The String we want to know the length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}

/**
 * swap_char - Take two point of char and swap the value of the variables
 * @a: Pointer of a
 * @b: Pointer of b
 */
void swap_char(char *a, char *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
