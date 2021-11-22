#include "main.h"

/**
 * create_file - Create a file
 *
 * @filename: The name of the file to create
 * @text_content: The content of the file
 *
 * Return: 1 on sucess, -1 on failure
 * Failure when filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, testWrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		testWrite = write(fd, text_content, _strlen(text_content));

		if (testWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

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
