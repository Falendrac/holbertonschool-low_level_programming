/**
 * _memset - Fills memory with a constant byte
 *
 * @s: The pointer we assign the memory
 * @b: The constant byte
 * @n: The first bytes of the memory area
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int loop;

	for (loop = 0; loop < n; loop++)
		*(s + loop) = b;

	return (s);
}

