/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Initial segment
 * @accept: Characters we accept
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, loop1, loop2;

	for (loop1 = 0; *(s + loop1) != '\0' && loop1 <= loop2; loop1++)
	{
		for (loop2 = 0; *(accept + loop2) != '\0'; loop2++)
			if (*(s + loop1) == *(accept + loop2))
				length++;

		if (*(accept + loop2) == '\0')
			break;
	}

	return (length);
}

