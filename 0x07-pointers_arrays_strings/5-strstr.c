/**
 * _strstr - Locates a substring
 *
 * @haystack: The string we search a substring
 * @needle: The substring
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int loop1, loop2, loopWod;
	char *substring = haystack;

	for (loop1 = 0; *(haystack + loop1) != '\0'; loop1++)
		if (*(haystack + loop1) == *needle)
		{
			substring = (haystack + loop1);
			for (loop2 = 0, loopWod = 0; *(needle + loop2) != '\0'; loop2++, loopWod++)
				if (*(haystack + loop1 + loopWod) == *(needle + loop2))
				{
					if (*(needle + loop2 + 1) != '\0')
						return (substring);
				}
				else
					break;
		}

	return (0);
}

