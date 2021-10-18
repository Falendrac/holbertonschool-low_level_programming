/**
 * _memcpy - Copies memory area
 *
 * @dest: The buffer add the copies and return
 * @src: The buffer we copies
 * @n: number of memory we copies
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int loop;

	for (loop = 0; loop < n; loop++)
		*(dest + loop) = *(src + loop);

	return (dest);
}

