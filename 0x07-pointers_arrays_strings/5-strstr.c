/**
 * _strstr - Locates a substring
 *
 * @haystack: The string we search a substring
 * @needle: The substring
 *
 * Return: 0 or haystack + loop1
 */
char *_strstr(char *haystack, char *needle)
{
	int loop1, loop2;

	for (loop1 = 0; *(haystack + loop1) != '\0'; loop1++)
	{
		for (loop2 = 0; *(needle + loop2) != '\0'; loop2++)
			if (*(haystack + loop1 + loop2) != *(needle + loop2))
				break;

		if (*(needle + loop2) == '\0')
			return (haystack + loop1);
	}

	return (0);
}

