#include "main.h"

/**
 * leet - Encode a string into leet (1337)
 *
 * @str: The string we encode
 *
 * Return: str
 */
char *leet(char *str)
{
	int loop1, loop2;
	char upperc[6] = { "AEOTL\0" };
	char lowerc[6] = { "aeotl\0" };
	char number[6] = { "43071\0" };

	for (loop1 = 0; *(str + loop1) != '\0'; loop1++)
		for (loop2 = 0; loop2 < 5; loop2++)
			if (*(str + loop1) == upperc[loop2] || *(str + loop1) == lowerc[loop2])
				*(str + loop1) = number[loop2];

	return (str);
}

