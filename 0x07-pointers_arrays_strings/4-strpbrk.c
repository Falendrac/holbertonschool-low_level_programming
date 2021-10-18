/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: The first string we search the first occurrence
 * @accept: The bytes we search
 *
 * Return: 0 or s
 */
char *_strpbrk(char *s, char *accept)
{
	int loop1, loop2;

	for (loop1 = 0; *(s + loop1) != '\0'; loop1++)
		for (loop2 = 0; *(accept + loop2) != '\0'; loop2++)
			if (*(s + loop1) == *(accept + loop2))
				return ((s + loop1));

	return (0);
}

