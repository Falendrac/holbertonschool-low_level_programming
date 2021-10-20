#include "main.h"

/**
 * is_palindrome - Test if a string is a palindrome
 *
 * @s: The string we test
 *
 * Return: 1 if is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int start = 0, length;

	length = _strlen_recursion(s) - 1;

	return (test_palindrome(s, start, length));

}

/**
 * test_palindrome - Test if the start of a string is equal of the end
 *
 * @s: The string we test
 * @start: The start of the string
 * @length: The length of the string
 *
 * Return: 1 if start and length is equal, 0 if not
 */
int test_palindrome(char *s, int start, int length)
{
	if (*(s + start) == *(s + length) && start < length)
		return (test_palindrome(s, start + 1, length - 1));
	else if (start < length)
		return (0);
	else
		return (1);
}

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

