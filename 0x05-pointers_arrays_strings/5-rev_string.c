#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 *
 * @s: The string we reverse
 */
void rev_string(char *s)
{
	char inter;
	int end = 0, start = 0;

	while (s[end + 1] != '\0')
		end++;

	while (end > start)
	{
		printf("%d %d\n", start, end);

		inter = s[end];
		s[end] = s[start];
		s[start] = inter;
		end--;
		start++;
	}
}

