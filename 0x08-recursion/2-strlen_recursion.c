#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 *
 * @s: The string we need to know the length
 *
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion((s + 1)));
	else
		return (0);
}

