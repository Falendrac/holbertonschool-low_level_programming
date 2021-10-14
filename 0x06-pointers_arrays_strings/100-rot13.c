#include "main.h"

/**
 * rot13 - Encode a string into rot13
 *
 * @str: The string we encode
 *
 * Return: str
 */
char *rot13(char *str)
{
	int loop1, loop2;
	char alpha[52] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" };
	char rot13[52] = { "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm" };

	for (loop1 = 0; *(str + loop1) != '\0'; loop1++)
		for (loop2 = 0; loop2 < 52; loop2++)
			if (*(str + loop1) == alpha[loop2])
			{
				*(str + loop1) = rot13[loop2];
				break;
			}

	return (str);
}

