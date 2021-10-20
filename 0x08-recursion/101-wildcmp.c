#include "main.h"

/**
 * wildcmp - Compares two strings. The special char * can replace any string
 *
 * @s1: The first string we compare
 * @s2: The second string we compare, can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int length_s1, length_s2;

	length_s1 = _strlen_recursion(s1);
	length_s2 = _strlen_recursion(s2);

	if (length_s1 == length_s2 && *s1 == *s2)
		return (wildcmp_identical_length(s1, s2));

	if (length_s1 > length_s2 * 2 && *s1 == *s2)
		return (wildcmp(wildcmp_large_string(s1, (s1 + 1)), s2));

	if (length_s2 == 1 && *s2 == '*')
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, (s2 + 1)));

	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (wildcmp((s1 + 1), (s2 + 1)));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*(s2 - 1) == '*' && *s1 != '\0')
		return (wildcmp((s1 + 1), s2));
	else
		return (0);
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

/**
 * wildcmp_identical_length - Same function of wildcmp, when the lengths
 * of the two strings is identical
 *
 * @s1: The first string we compare
 * @s2: The second string we compare
 *
 * Return: 1 if is identical, otherwise 0
 */
int wildcmp_identical_length(char *s1, char *s2)
{
	if ((*s1 == *s2 && *s1 != '\0' && *s2 != '\0') || *s2 == '*')
		return (wildcmp_identical_length((s1 + 1), (s2 + 1)));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (0);
}

/**
 * wildcmp_large_string - Same function of wildcmp but when the length of
 * the first string have is the double of the length of the second string
 * and sirch an identical character in the string
 *
 * @s1: The original string
 * @s1Bis: The current adress in the string
 *
 * Return: An adress if we find the same character, otherwise 0
 */
char *wildcmp_large_string(char *s1, char *s1Bis)
{
	if (*s1 != *s1Bis && *s1Bis != '\0')
		return (wildcmp_large_string(s1, (s1Bis + 1)));
	else if (*s1 == *s1Bis)
		return (s1Bis);
	else
		return (s1);
}

