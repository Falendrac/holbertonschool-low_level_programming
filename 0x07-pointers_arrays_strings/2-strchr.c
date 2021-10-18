/**
 * _strchr - Locates a character in a string
 *
 * @s: The string we need to locate a character
 * @c: The character we need to locate
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	if (*s == c)
		return (s);

	return (0);
}

