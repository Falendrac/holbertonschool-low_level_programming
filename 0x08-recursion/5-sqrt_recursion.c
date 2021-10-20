#include "main.h"

/**
 * _squrt_recursion - Return the natural square root of a number
 *
 * @n: The number we want to square
 *
 * Return: -1 if n not have natural square root else the square
 */
int _squrt_recursion(int n)
{
	int i = 2;

	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		i = search_squrt(n, i);
		if (_pow_recursion(i, 2) == n)
			return (i);
		else
			return (-1);
	}
}

/**
 * search_squrt - search the result of a squrt
 *
 * @n: The number we want to square
 * @i: The first value we increment in the function
 *
 * Return: i
 */
int search_squrt(int n, int i)
{
	if (i * i < n)
		search_squrt(n, i + 1);
	else
		return (i);

	return (-1);
}
