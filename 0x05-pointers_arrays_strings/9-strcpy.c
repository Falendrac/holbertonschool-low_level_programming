/**
 * _strcpy - Copies the string pointed to by src to the buffer
 * pointed to by dest
 *
 * @dest: The buffer
 * @src: The string pointed
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0, loop;

	while (src[length] != '\0')
		length++;

	for (loop = 0; loop <= length; loop++)
		dest[loop] = src[loop];

	return (dest);
}
