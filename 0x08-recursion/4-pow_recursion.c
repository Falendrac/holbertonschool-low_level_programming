#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y
 *
 * @x: The number we raised
 * @y: The exposant
 *
 * Return: -1 if y < 0, 1 if y == 0, the value of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
