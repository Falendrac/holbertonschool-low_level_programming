#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Name of the file to append a text
 * @text_content: Content to append at a file
 *
 * Return: -1 if filename is NULL, the file does not exists
 * or the is a failure
 * 1 if is a succes
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, _strlen(text_content));

	close(fd);

	return (1);
}

/**
 * _strlen - Return the length of a string
 *
 * @s: The String we want to know the length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
