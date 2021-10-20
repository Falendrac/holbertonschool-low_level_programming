#include "main.h"

/**
 * _sqrt_recursion - Return the natural square root of a number
 *
 * @n: The number we want to square
 *
 * Return: -1 if n not have natural square root else the square
 */
int _sqrt_recursion(int n)
{
	int i = 2;

	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		i = search_sqrt(n, i);
		if (i * i == n)
			return (i);
		else
			return (-1);
	}
}

/**
 * search_sqrt - search the result of a squrt
 *
 * @n: The number we want to square
 * @i: The first value we increment in the function
 *
 * Return: i
 */
int search_sqrt(int n, int i)
{
	if (i * i < n)
		return (search_sqrt(n, i + 1));

	return (i);
}
