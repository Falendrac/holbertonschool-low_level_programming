#include "main.h"

/**
 * factorial - Return the factorial of a given number
 *
 * @n: The number we want the factorial
 *
 * Return: The factorial
 */
int factorial(int n)
{
	if (n > 0 && n != -1 && n < 13)
		return (n * factorial(n - 1));
	else if (n < 0 && n > -13)
	{
		n *= -1;
		return ((n * factorial(n - 1)) * -1);
	}
	else if (n <= -13)
		return (-1);
	else
		return (1);
}

